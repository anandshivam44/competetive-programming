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
    ll n;
    cin >> n;
    int coins[3] = {0};
    int arr[n];
    arr[0]=0;
    arr[1]=0;
    arr[2]=0;
    bool b = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 5)
        {
            coins[0]++;
        }
        else if (arr[i] == 10)
        {
            if (coins[0] >= 1)
            {
                coins[1]++;
                coins[0]--;
            }
            else
            {
                cout << "NO\n";
                b = false;
                break;
            }
        }
        else if (arr[i] == 15)
        {
            if (coins[1] >= 1)
            {
                coins[2]++;
                coins[1]--;
            }
            else if (coins[0] >= 2)
            {
                coins[2]++;
                coins[0] -= 2;
            }
            else
            {
                cout << "NO\n";
                b = false;
                break;
            }
        }
    }
    if (b)
    {
        cout << "YES\n";
    }

    //cout <<a<<"\n";
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