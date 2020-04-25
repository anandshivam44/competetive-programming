#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define debug(oOo, OoO) cout << " " << oOo << " " << OoO << endl
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

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // sort(begin(arr),end(arr));
    // print_array(arr);
    // cout << endl;
    unsigned long long int sum = 0;
    int a = 0;
    ll temp = n / m;
    int i = 1;
    ll index = 0;
    for (; i <= (n / m); i++)
    {
        a++;
        for (int j = 0; j < m; j++)
        {
            // sum+=a*arr[j+i-1];
            sum += a * arr[index];
            sum %= mod;
            index++;
        }
        // debug("Sum", sum);
        // i=i+m;
        // debug("i",i);
    }
    // debug("i",i);
    for (int j = ((int)(n / m)) * m + 1; j <= n; j++)
    {
        // debug("j",j);
        //sum+=a*arr[j];
        sum += a * arr[index];
        index++;
        // debug("Sum", sum);
        sum %= mod;
    }

    cout << sum << endl;

    time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}
