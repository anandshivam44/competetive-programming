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
    int n, r, c;
    cin >> r >> c >> n;
    string s;

    int matrix[r][c];
    int answer[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            answer[i][j] = 0;

    for (int i = 0; i < r; i++) //input
    {
        cin >> s;
        for (int j = 0; j < c; j++)
        {
            if (s[j] == '.')
            {
                matrix[i][j] = 0; // 0 for absent
                answer[i][j] = 0;
            }
            else if (s[j] == 'O')
            {
                matrix[i][j] = 1; // 1 for present
                answer[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 1)
            {
                if (i + 1 <= r - 1)
                {
                    answer[i + 1][j] = 2;
                }

                if (i - 1 >= 0)
                {
                    answer[i - 1][j] = 2;
                }

                if (j + 1 <= c - 1)
                {
                    answer[i][j + 1] = 2;
                }

                if (j - 1 >= 0)
                {
                    answer[i][j - 1] = 2;
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << answer[i][j];
        }
        cout << endl;
    }
    cout << endl;

    if (n % 2 == 0 && n != 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << '.';
            }
            cout << endl;
        }
    }
    else if (n % 4 == 1 && n != 1)
    {

        for (int i = 0; i < r; i++) // print array
        {
            for (int j = 0; j < c; j++)
            {
                if (answer[i][j] == 1)
                {
                    cout << 'O';
                }
                else if (answer[i][j] == 2)
                {
                    if (matrix[i][j] == 1)
                    {
                        cout << 'O';
                    }
                    else if (matrix[i][j] == 0)
                    {
                        cout << 'O';
                    }
                }
                else if (answer[i][j] == 0)
                {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    else if (n % 4 == 3)
    {

        for (int i = 0; i < r; i++) // print array
        {
            for (int j = 0; j < c; j++)
            {
                if (answer[i][j] == 1)
                {
                    cout << '.';
                }
                else if (answer[i][j] == 2)
                {
                    if (matrix[i][j] == 1)
                    {
                        cout << '.';
                    }
                    else if (matrix[i][j] == 0)
                    {
                        cout << '.';
                    }
                }
                else if (answer[i][j] == 0)
                {
                    cout << 'O';
                }
            }
            cout << endl;
        }
    }
    else if (n == 0 || n == 1)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] == 1)
                {
                    cout << 'O';
                }
                else if (matrix[i][j] == 0)
                {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}