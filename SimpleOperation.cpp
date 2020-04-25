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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    while (k--)
    {
        string s, t;
        cin >> s >> t;
        cout << s << endl
             << t << endl;
        int n = s.size();
        vector<int> lengths;
        int curlen = 0, fl = 0, matlen = 0;
        ll ans = 0;
        cout << "string length " << n << endl;
        cout << "ans " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "len = " << curlen << endl;
            if (s[i] != t[i])
            {
                cout << "        " << s[i] << " != " << t[i] << "    at index " << i << endl;
                if (curlen > 0 && fl > 0)
                {
                    cout << "push_back " << curlen << endl; //4 5 13 2 12 6
                    lengths.push_back(curlen), ans += curlen;
                    cout << "ans " << ans << endl;
                }
                curlen = 0;
                fl = 1;
                ans++;
                continue;
            }
            ++curlen;
        }
        cout << "\n\n";
        print_vector(lengths);
        n = ans;
        sort(lengths.begin(), lengths.end(), greater<int>());
        print_vector(lengths);
        cout << " n = " << n << endl;
        for (ll i = 0; i < lengths.size(); i++)
        {
            n -= lengths[i];
            cout << " n = " << n << endl;
            cout << i << "+2 * " << n << " = " << (i + 2) * n << endl;
            ans = min(ans, (i + 2) * n);
            cout << " ans = " << ans << endl;
        }
        cout << ans << "\n";
    }
}