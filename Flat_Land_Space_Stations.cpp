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
    int n, a;
    cin >> n;
    cin >> a;
    // cout << n << " " << a << endl;
    int location[a];
    int result;
    for (int i = 0; i < a; i++)
    {
        cin >> location[i];
        // cout << location[i];
    }
    int maxdis = 0;
    if (n == 1)
    {
        result = 0;
    }
    else
    {
        sort(location, location + a);
        for (int i = 0; i < a - 1; i++)
        {
            maxdis = max((location[i + 1] - location[i])/2, maxdis);
        }
    }
    // maxdis = maxdis / 2;
    maxdis = max(maxdis, location[0] - 0);
    maxdis = max(maxdis, n - location[a-1]-1);

    // cout<<" answer is";
    cout << maxdis;

    // cout << result << endl;
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}