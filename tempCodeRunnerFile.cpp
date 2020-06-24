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
    int pointer_odd = 1;
    int pointer_even = 2;
    int matrix[n][n];

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    matrix[i][j] = pointer_odd;
                    pointer_odd += 2;
                }
                else if ((i + j) == n - 1)
                {
                    matrix[i][j] = pointer_even;
                    pointer_even += 2;
                }
            }
        }
        int start;
        if (pointer_even > pointer_odd)
        {
            start = pointer_even - 1;
        }
        else
        {
            start = pointer_odd - 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && (i + j) != n - 1)
                {
                    matrix[i][j] = start;
                    start++;
                }
            }
        }
    }
    else
    {
        queue<int> q;
        for (int i = 1; i <= n * n; i += 2)
        {
            q.push(i);
        }
        for (int i = 2; i <= n * n; i += 2)
        {
            q.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || ((i + j) == n - 1))
                {
                    matrix[i][j] = q.front();
                    q.pop();
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && ((i + j) != n - 1))
                {
                    matrix[i][j] = q.front();
                    q.pop();
                }
            }
        }
    }

    //print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
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