#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());

void test_case()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int max[n][m];
    // fill_my(max,0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'G')
            {
                max[i][j] = 1;
            }
            else
            {
                max[i][j] = 0;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'G')
            {
                int ii = i, jj = j, pointer = 1;
                int maxi = 1;
                while (((ii - pointer) >= 0) && ((jj - pointer) >= 0) && ((jj + pointer) < m) && ((ii + pointer) < n))
                {
                    cout << pointer << endl;
                    // int maxi = 0;
                    if ((arr[ii - pointer][jj] == 'G') && (arr[ii][jj - pointer] == 'G') && (arr[ii][jj + pointer] == 'G') && (arr[ii + pointer][jj] == 'G'))
                    {
                        cout << "True" << endl;
                        maxi += 4;
                        max[i][j] = maxi;
                        pointer++;
                    }
                    else
                    {
                        cout << "False" << endl;
                        // maxi += 1;
                        max[i][j] = maxi;
                        break;
                    }
                }
            }
        }
    }
    print_vector(v);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << max[i][j] << " ";
        }
        cout << endl;
    }
    // int answer = 0;
    // int l = v.size();
    // if (l > 0)
    // {
    //     sort(v.begin(), v.end());
    // }

    // if (v.size() == 0)
    // {
    //     answer = 1;
    // }
    // else if (v.size() == 1)
    // {
    //     answer = v[0];
    // }
    // else
    // {
    //     answer = (v[v.size() - 1] * 2 + 1) * (v[v.size() - 2] * 2 + 1);
    // }
    // cout << answer << endl;
    // ;

    //cout <<a<<"\n";
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    FIO;

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        test_case();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}