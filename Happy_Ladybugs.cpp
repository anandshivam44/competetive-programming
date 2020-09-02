#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(arr)                                         \
    loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // s+="_";
    // int arr[n];
    // fill_my(arr,0);
    map<char, int> arr;
    for (int i = 0; i < n; i++)
    {
        arr[s[i]]++;
    }
    bool possible = true;
    for (auto x : arr)
    {
        if (x.second <= 1 && x.first != '_')
        {
            possible = 0;
        }
    }

    int cc = 0;
    bool pp2=true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '_')
        {
            cc++;
        }
    }
    if (cc == 0 && n==1)
    {
        pp2 = false;
    }

    if (n == 1)
    {
        if (s[0] == '_')
        {
            pp2 = true;
        }
        else
        {
            pp2 = false;
        }
    }
    string ss = "";
    ss += s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i] && s[i] != '_')
        {
            ss += s[i];
        }
    }
    // cout << ss << endl;
    int aa[26];
    fill_my(aa, 0);

    bool pp = true;

    if (cc == 0)
    {
        for (int i = 0; i < ss.length(); i++)
        {
            aa[ss[i] - 'A']++;
        }
        // print_array(aa);
        int ccc = 0;
        for (int i = 0; i < 26; i++)
        {
            if (aa[i] > 1)
            {
                pp = false;
                // break;
            }
            if (aa[i] == 1)
            {
                ccc++;
            }
        }
        // cout << ccc << endl;
        if (ccc == ss.length() && cc == 0)
        {
            pp = true;
        }
    }
    // cout<<possible<<" "<<pp<<" "<<pp2<<endl;

    if (possible && pp && pp2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // cout <<"\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}