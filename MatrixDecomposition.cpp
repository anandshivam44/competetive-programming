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

ll modpow(ll x, ll n)
{
    if (n == 0)
        return 1 % mod;
    ll u = modpow(x, n / 2);
    u = (u * u) % mod;
    if (n % 2)
        u = (u * x) % mod;
    return u;
}

void solve()
{
    ll n, a;
    cin >> n >> a;

    ll power = 0, sum = 0, answer = 0;

    for (int i = 1; i <= 50; i++)
    {
        power = (sum + 1) * (2 * i - 1);
        power %= (mod - 1);
        sum += power;
        cout << power << " ";

        sum %= (mod - 1);
        //answer += modpow(a, power);
        //answer %= mod;
    }
    // cout << answer << endl;
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

    time_req = clock() - time_req;
    //cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}
