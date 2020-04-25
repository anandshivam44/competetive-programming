#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(aarr)                                           \
    loop(z, sizeof(aarr) / sizeof(aarr[0])) cout << aarr[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)

int fact(int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

void solve()
{
    ll n, r, k;
    cin >> n >> r >> k;
    cout << r << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 1; i < fact(n); i++)
    {
        int c = 0;
        for (int j = 0; j < n - 1; j++)
        {

            for (int k = j + 1; k < n; k++)
            {
                if (arr[j] > arr[k])
                {
                    c++;
                }
            }
        }
        if (c == r)
        {
            print_array(arr);
            c = 0;
        }
        next_permutation(arr, arr + n);
    }

    // reverse(begin(arr),arr.begin()+r);
    // print_vector(arr);

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

    time_req = clock() - time_req;
    cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC
         << " sec" << endl;
    return 0;
}
