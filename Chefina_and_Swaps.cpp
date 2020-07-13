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

ll a[999999999];
ll bbb[999999999];

void solve()
{
    // fill_my(a,0);
    // fill_my(bbb,0);
    // int n;
    // cin >> n;
    // ll t;
    // vector<ll> aa;
    // vector<ll> bb;

    // for (int i = 0; i < n; i++)
    // {

    //     cin >> t;
    //     a[t]++;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> t;
    //     bbb[t]++;
    // }
    // for (auto i = 0; i < 999999999; i++)
    // {
    //     if (a[i] != bbb[i])
    //     {
    //         if (a[i] > bbb[i])
    //         {
    //             for (int i = 1; i <= (a[i] - bbb[i]); i = i + 2)
    //             {
    //                 aa.push_back(i);
    //             }
    //         }
    //         else
    //         {
    //             for (int i = 1; i <= (bbb[i] - a[i]); i = i + 2)
    //             {
    //                 bb.push_back(i);
    //             }
    //         }
    //     }
    // }
    // print_vector(aa);
    // print_vector(bb);
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