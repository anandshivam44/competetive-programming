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
    map<ll, ll> map;
    vector<ll> A;
    vector<ll> B;

    ll temp;

    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        map[temp]++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        map[temp]--;
    }
    ll mini = temp;
    bool flag = false;
    for (auto x : map)
    {
        mini = min(mini, x.first);
        temp = abs(x.second);

        if (temp % 2 == 1)
        {
            flag = true;
            break;
        }
        temp = x.second;
        if (temp > 0)
        {
            temp /= 2;
            while (temp--)
            {
                A.push_back(x.first);
            }
        }
        else if (temp < 0)
        {
            temp = abs(temp) / 2;
            while (temp--)
            {
                B.push_back(x.first);
            }
        }
    }
    if (flag)
    {
        cout << -1 << endl;
    }
    else
    {
        reverse(B.begin(), B.end());
        ll answer = 0;
        for (ll i = 0; i < A.size(); i++)
        {
            answer += min(2 * mini, min(A[i], B[i]));
        }
        cout << answer << "\n";
    }
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