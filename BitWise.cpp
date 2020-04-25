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

void bin(int n)
{
    if (n > 1)
        bin(n >> 1);

    //printf("%d", n & 1);
    cout << (n & 1);
}

void solve()
{
    int x = 6;
    bin(x);
    cout << endl;
    // cout << __builtin_ctz(x) << endl;
    // if (x % 4 == 1)
    // {
    //     cout << x << " is odd " << endl;
    // }
    // else
    // {
    //     cout << x << " is even " << endl;
    //     ;
    // }

    for (int i = 0; i <= 100 ;i++)
    {
        bin(x);
        cout << " ";
        bin(i);
        cout << " ";
        if (x & i)
        {
            cout << " True " << endl;
        }
        else
        {
            cout << " False " << endl;
        }
    }

    // int temp = x;
    // for (int i = 0; (1 << i) <= x; i++)
    //     if (x & (1 << i))
    //         cout << i << " ";

    // for (int i = 0; i < 30; i++)
    //     if ((x & (1 << i)) != 0)
    //         cout << i << " ";

    // bin(n);
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << i << "   " << (1024 >> (i * (-1))) << endl;
    // }

    // for (int i = 0; i <= 150; i++)
    // {
    //     // if ((n & (1 << i)) != 0)
    //     // {
    //     //     cout << 1;
    //     // }
    //     // else
    //     // {
    //     //     cout << 0;
    //     // }
    //     n = temp;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if ((n & (1ULL << j)) != 0)
    //         {
    //             cout << 1;
    //         }
    //         else
    //         {
    //             cout << 0;
    //         }
    //     }
    //     cout << endl;
    // }
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
    //     solve();
    // }
    solve();

    time_req = clock() - time_req;
    cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC
         << " sec" << endl;
    return 0;
}
