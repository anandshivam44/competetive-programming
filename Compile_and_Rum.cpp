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

void solve()
{
    // vector<int> vec({9, 8, 7, 6, 5, 4, 3, 2, 1});
    // vector<int> vec2;
    // vec2 = vec;
    // delete_by_value(vec2, 10);
    // print_vector(vec);
    // print_vector(vec2);

    vector<int> v;
    int ss = 0;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    // v.push_back(2);
    // v.push_back(2);
    int ans = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        ans = ans ^ v[i];
        // cout << "i : " << ans << endl;
        cout << ans << " ";
        ss += v[i];
    }
    cout << endl
         << endl;
    ans = 0;
    for (int i = 1; i <= ss; i++)
    {
        ans = ans ^ i;
        // cout << "i : " << ans << endl;
        cout << ans << " ";
    }
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    // FIO;

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