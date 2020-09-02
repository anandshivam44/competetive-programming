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
    // cout<<n;
    string s;
    cin >> s;
    int l = s.length();
    int lenv = 0;
    // cout<<s<<endl;

    vector<pair<int, char>> v;
    for (int i = 0; i < l; i++)
    {
        char c = s[i];
        if (c == 'A')
        {
            v.emplace_back(i, 'A');
            lenv++;
        }
        else if (c == 'B')
        {
            v.emplace_back(i, 'B');
            lenv++;
        }
        // else if (c=='-')
        // {
        //     v.emplace_back(i,'A');
        // }
    }

    if (v[0].second == 'A' && v[0].first != 0)
    {

        for (int j = 0; j <= (v[0].first); j++)
        {
            s[j] = 'A';
        }
    }

    if (v[0].second == 'B')
    {
        if (lenv > 1)
            if (v[1].second == 'B')
            {
                for (int j = v[0].first; j <= (v[1].first); j++)
                {
                    s[j] = 'B';
                }
            }
            else if (v[1].second == 'A')
            {
                int low = v[0].first;
                int high = v[1].first;
                int diff = high - low - 1;
                if (diff > 1)
                    if (diff % 2 == 0)
                    {
                        for (int j = 1; j <= (diff / 2); j++)
                        {
                            s[low + j] = 'B';
                            s[high - j] = 'A';
                        }
                    }
                    else
                    {
                        for (int j = 1; j <= (diff - 1) / 2; j++)
                        {
                            s[low + j] = 'B';
                            s[high - j] = 'A';
                        }
                    }
            }
    }
    if(lenv>1)
    for (int i = 1; i < lenv; i++)
    {
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        if (v[i].second == 'A')
        {

            if (v[i - 1].second == 'A')
            {
                for (int j = (v[i - 1].first); j < (v[i].first); j++)
                {
                    s[j] = 'A';
                }
            }
        }
        else if (v[i].second == 'B')
        {   if(i+1<=lenv-1)
            if (v[i + 1].second == 'B')
            {
                for (int j = (v[i].first); j < (v[i + 1].first); j++)
                {
                    s[j] = 'B';
                }
            }
            else if (v[i + 1].second == 'A')
            {
                int low = v[i].first;
                int high = v[i + 1].first;
                int diff = high - low - 1;
                if (diff > 1)
                    if (diff % 2 == 0)
                    {
                        for (int j = 1; j <= (diff / 2); j++)
                        {
                            s[low + j] = 'B';
                            s[high - j] = 'A';
                        }
                    }
                    else
                    {
                        for (int j = 1; j <= (diff - 1) / 2; j++)
                        {
                            s[low + j] = 'B';
                            s[high - j] = 'A';
                        }
                    }
            }
        }
    }
    int AA = 0, BB = 0;
    for (int i = 0; i < l; i++)
    {
        char c = s[i];
        if (c == 'A')
        {
            AA++;
        }
        else if (c == 'B')
        {
            BB++;
        }
    }
    if (AA > BB)
    {
        cout << "A";
    }
    else if (BB > AA)
    {
        cout << "B";
    }
    else if (AA == BB)
    {
        cout << "Coalition government";
    }

    // cout << s << endl;

    //cout <<a<<"\n";
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
    // }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}