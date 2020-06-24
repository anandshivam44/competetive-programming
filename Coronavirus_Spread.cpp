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
    vector<int> v;
    vector<int> vv;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    // print_vector(v);
    int mn = INT_MAX;
    int mx = 0;
    int temp = v[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int k = v[i] - temp;
        // cout << k << " <= 2 is " << (k <= 2) << endl;
        if (k <= 2)
        {

            count++;
            // cout << "count increased to " << count << endl;
        }
        else
        {
            mn = min(mn, count);
            mx = max(mx, count);
            count = 0;
            // cout << "count set to zero" << endl;
        }
        temp = v[i];
    }
    mn = min(mn, count);
    mx = max(mx, count);
    cout << mn + 1 << " " << mx + 1 << endl;
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