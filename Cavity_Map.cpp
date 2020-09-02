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
    int n;
    cin >> n;

    int arr[n][n];
    bool a[n][n];
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=s[j]-'0';
            a[i][j] = 0;
        }
    }

    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j]=s[j]-'0';
    //         a[i][j] = 0;
    //     }
    // }
    // cout<<endl;


    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j] &&
                arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i][j - 1])
            {
                a[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                cout << "X";
            }
            else
            {
                cout << arr[i][j];
            }
        }
        cout << "\n";
    }

    //cout <<a<<"\n";
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