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
#define print_vector_pair(vvv)                                                \
    loop(z, vvv.size()) cout << vvv[z].first << " " << vvv[z].second << "\n"; \
    cout << "\n";
#define fill_my(arr, q) fill(all(arr), q)

void solve()
{
    ll n;
    cin >> n;
    int arr[2][4 * n - 1];
    int res_x, res_y;
    map<int, int> umap_x;
    map<int, int> umap_y;

    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> arr[0][i];
        cin >> arr[1][i];
        umap_x[arr[0][i]]++;
        umap_y[arr[1][i]]++;
    }
    for (auto x : umap_x)
    {
        // cout << x.first << " " << x.second << endl;
        if (x.second % 2 == 1)
        {
            res_x = x.first;
        }
    }
    // cout << endl;
    for (auto x : umap_y)
    {
        // cout << x.first << " " << x.second << endl;
        if (x.second % 2 == 1)
        {
            res_y = x.first;
        }
    }
    // cout << endl;

    cout<<res_x<<" "<<res_y<<endl;
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