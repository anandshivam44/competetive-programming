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
    int n, d;
    cin >> n >> d;
    ll arr[n];
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll minimum = d - 1;
    sort(arr, arr + n);
    ll max_freq = 0;
    ll temp = arr[0];
    ll f = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == temp)
        {
            f++;
        }
        else
        {
            max_freq = max(f, max_freq);
            temp = arr[i];
            if (i < n - 1)
                f = 1;
        }
    }
    max_freq = max(f, max_freq);
    if (max_freq == d)
    {
        minimum = 0;
    }

    ll hcf = arr[0];
    for (int i = 1; i < min(n, d); i++)
    {
        hcf = gcd(hcf, arr[i]);
    }
    // cout << hcf << endl;
    int pointer = 0;
    ll count = 0;
    for (int i = 0; i < d; i++)
    {
        if (arr[pointer] != 0)
        {
            // if (hcf != arr[i])
                count++;
            arr[pointer] -= hcf;
        }
        else
        {
            pointer = pointer + 1;
            arr[pointer] -= hcf;
            // count++;
        }
    }
    minimum = min(minimum, count);
    cout << minimum << endl;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}