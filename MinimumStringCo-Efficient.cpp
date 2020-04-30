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
    ll n, a;
    cin >> n >> a;

    for (int i = 0; i <= n; i++)
    {
    }
    //cout <<a<<"\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n, wallet;
    cin >> n >> wallet;
    string s;
    cin >> s;
    int lp = 0;
    int rp = n - 1;
    char l = s[0], r = s[n - 1];
    int rl = 0, rr = 0;
    while (lp != rp)
    {
        while (l == s[lp])
        {
            rl++;
            lp++;
        }

        // if (l == s[lp])
        // {
        //     rl++;
        //     lp++;
        // }
        // else if (l != s[lp])
        // {
        // }
        // if (r == s[rp])
        // {
        //     rr++;
        //     rp--;
        // }
        // else if (l != s[lp])
        // {
        // }
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}
