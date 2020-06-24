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
vector<int> v[100005];

void solve()
{
    int n, a;
    cin >> n;
    int arr[n];
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        v[arr[i]].push_back(i);
    }
    for (int i = 0; i < 100005; i++)
    {
        if (v[i].size() > 0)
            for (int j = 0; j < v[i].size() - 1; j++)
            {
                mini = min(mini, v[i][j + 1] - v[i][j]);
            }
    }
    if (mini==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else    
    cout << mini << endl;
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
