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
// #define isBitSet(S, i) ((S >> i) & 1)

void solve()
{
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    // }

    // for (int i = 1; i <= 64; i++)
    // {
    //     cout << i << "  ";
    // }
    int count = 1;
    for (int i = 0; i <= 10; i++)
    {
        int start = count + 1;
        int end = (int)pow(2, i);

        for (int j = start; j <= end; j++)
        {
            // if (i < 4 || count == 8 || count == 9 || count == 10 || count == 11 || count == 16 || count == 22 || count == 44 || count == 32 || count == 33)
            // {
            //     cout << count << " ";
            // }
            // else
            // {
            //     cout << "-1 ";
            // }
            if (j==start || j==end)
            {
                cout << count << " ";
            }
            else
            {
                cout << "-1 ";
            }

            count++;
        }
        // cout << endl;
    }

    // cout << endl;
    // count = 1;
    // for (int i = 0; i <= 6; i++)
    // {
    //     int start = count + 1;
    //     int end = (int)pow(2, i);
    //     // for (int j = 6; j >=i ;j++)
    //     // {
    //     //     // if (j == start || j == end)
    //     //     // {
    //     //     //     cout << count << " ";
    //     //     // }
    //     //     // else
    //     //     // {
    //     //     //     cout << "-1 ";
    //     //     // }
    //     //     cout << " ";

    //     //     // count++;
    //     // }
    //     for (int j = start; j <= end; j++)
    //     {
    //         // if (j == start || j == end)
    //         // {
    //         //     cout << count << " ";
    //         // }
    //         // else
    //         // {
    //         //     cout << "-1 ";
    //         // }
    //         cout << count << " ";

    //         count++;
    //     }
    //     // cout<<endl;
    // }
    // cout << endl;
    // count = 1;
    // for (int i = 0; i <= 6; i++)
    // {
    //     int start = count + 1;
    //     int end = (int)pow(2, i);
    //     // for (int j = 6; j >=i ;j++)
    //     // {
    //     //     // if (j == start || j == end)
    //     //     // {
    //     //     //     cout << count << " ";
    //     //     // }
    //     //     // else
    //     //     // {
    //     //     //     cout << "-1 ";
    //     //     // }
    //     //     cout << " ";

    //     //     // count++;
    //     // }
    //     for (int j = start; j <= end; j++)
    //     {
    //         // if (j == start || j == end)
    //         // {
    //         //     cout << count << " ";
    //         // }
    //         // else
    //         // {
    //         //     cout << "-1 ";
    //         // }
    //         cout << count << " , ";

    //         count++;
    //     }
    //     // cout<<endl;
    // }
    // cout << endl;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}