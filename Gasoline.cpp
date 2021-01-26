#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array f)                                         \
    loop(z, sizeof f) / sizeof f[0])) cout << f[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my f, q) fill(all f), q)
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());

void test_case()
{
    ll n;
    cin >> n;
    ll f[n];
    ll c[n];
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back({c[i], f[i]});
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    ll cost = 0;
    for (int i = 0; i < n; i++)
    {
        ll cc = v[i].first;
        ll ff = v[i].second;
        if (sum + ff <= n)
        {
            cost += ff * cc;
            sum += ff;
            // cout << "  " << sum << endl;
        }
        else
        {
            cost = cost - (sum - n) * cc;
            break;
        }
    }

    cout << cost << endl;

    //cout <<a<<"\n";
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    FIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        test_case();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}