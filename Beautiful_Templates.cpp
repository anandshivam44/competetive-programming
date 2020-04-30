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

bool arr[20105];
void solve()
{
    //fill(arr,arr+20005,false);
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        ll aaa;
        cin >> aaa;
        arr[aaa] = true;
        a[i] = aaa;
    }
    //sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        if (arr[a[i]] == true && arr[a[i] + k] == true && arr[a[i] + 2 * k] == true)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);
    solve();

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}
