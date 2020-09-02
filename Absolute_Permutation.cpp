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
#define fill_my(arrrrrr, q) fill(all(arrrrrr), q)
// #define isBitSet(S, i) ((S >> i) & 1)

void solve()
{
    int n, k;
    cin >> n >> k;
    // cout << n << " ::: " << k << endl;
    if (k != 0)
    {
        if (n % 2 == 0)
        {
            int end[((int)n / k)];
            int start[n / k];
            // fill(end, end + n / k, 0);
            int aa = k;
            int sum_start = 0;
            int sum_end = 0;
            for (int i = 0; i < (n / k); i++)
            {
                int index = (i % 2 == 0) ? i + 1 : i - 1;
                // cout<<index<<" index"<<endl;
                end[index] = aa;
                sum_end += end[index];

                start[index] = aa - k + 1;
                sum_start += start[index];
                aa += k;

                // aa = n / k * (i + 1);
            }
            // cout << sum_start << " : " << sum_end << endl;
            if (sum_end - sum_start == n - (n / k))
            {
                // cout << "possible";
                for (int i = 0; i < n / k; i++)
                {
                    for (int j = start[i]; j <= end[i]; j++)
                    {
                        cout << j << " ";
                    }
                }
            }
            else
            {
                cout << -1;
            }
            // cout << endl;
            // cout << "start and end" << endl;
            // print_array(start);
            // print_array(end);
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        // cout << "possible";
        for (int i = 1; i <= n; i++)
        {
            cout << (i) << " ";
        }
    }

    cout << endl;
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