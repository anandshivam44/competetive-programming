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
    int R, C, r, c;

    cin >> R >> C;

    int grid[R][C];

    for (int i = 0; i < R; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < C; j++)
        {
            grid[i][j] = s[j] - '0';
        }
    }

    cin >> r >> c;

    int pattern[r][c];

    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < c; j++)
        {
            pattern[i][j] = s[j] - '0';
        }
    }
    bool assume = false;
    for (int i = 0; i < R - r + 1; i++)
    {
        for (int j = 0; j < C - c + 1; j++)
        {
            if (pattern[0][0] == grid[i][j])
            {
                if (pattern[r - 1][c - 1] == grid[i + r - 1][j + c - 1] &&
                    pattern[0][c - 1] == grid[i][j + c - 1] &&
                    pattern[r - 1][0] == grid[i + r - 1][j])
                {

                    // cout<<"suspect"<<endl;
                    int cc=0;
                    for (int k = 0; k < r; k++)
                    {
                        for (int l = 0; l < c; l++)
                        {
                            if (pattern[k][l] == grid[i + k][j + l])
                            {
                                cc++;
                            }
                            else
                            {
                                break;
                            }
                            
                        }
                    }
                    // cout<<cc<<endl;
                    if (cc==(r*c))
                    {
                        assume=true;
                        break;
                    }
                    
                }
            }
            
        }
    }
    if (assume == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO"<<endl;
    }

    // cout <<"\n";
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