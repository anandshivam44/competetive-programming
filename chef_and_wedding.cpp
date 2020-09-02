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


const int MAX = 1005;
int dp[MAX];
int f[MAX];
int cnt[MAX];
int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    assert(1 <= T && T <= 100);
    while(T--)
    {
        int n , K;
        cin >> n >> K;
        assert(1 <= n && n <= 1000);
        assert(1 <= K && K <= 1000);
        for(int i = 0; i < n; i++)
        {
            cin >> f[i];
            assert(1 <= f[i] && f[i] <= 100);
        }
        for(int i = 1; i <= n; i++)
                dp[i] = 1e9;
        dp[0] = 0;
        for(int i = 0; i < n; i++)
        {
            memset(cnt , 0 , sizeof cnt);
            for(int j = i; j < n; j++)
            {
                cnt[f[j]]++;
                // print_array(cnt);

                int g = 0;
                for(int k = 1; k <= 100; k++){
                    g += cnt[k] == 1 ? 0 : cnt[k];
                    // cout<<g<<endl;
                    }
                dp[j + 1] = min(dp[i] + g + K , dp[j + 1]);
                // print_array(dp);
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
} 