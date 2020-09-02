#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
const long long INF = 1e9 + 7;
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
    int h, w;
    cin >> h >> w;

    int arr[h][w];
    int answer = 0;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row[h];
    int column[w];
    for (int i = 0; i < h; i++)
    {
        int previous = arr[i][0];
        int sum = 0;
        sum += previous;
        for (int j = 1; j < w; j++)
        {
            sum += abs(previous - arr[i][j]);
            previous = arr[i][j];
        }
        sum += arr[i][w - 1];
        answer += sum;
    }

    for (int i = 0; i < w; i++)
    {
        int previous = arr[0][i];
        int sum = 0;
        sum += previous;
        for (int j = 1; j < h; j++)
        {
            sum += abs(previous - arr[j][i]);
            previous = arr[j][i];
        }
        sum += arr[h - 1][i];
        answer += sum;
    }

    answer += 2 * h * w;
    cout << answer << endl;
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