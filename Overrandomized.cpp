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

bool solve()
{
    int x, y;
    cin >> x >> y;
    string s;
    bool b = false;
    cin >> s;
    int l = s.length();
    // cout << x << y;
    int xx = x, yy = y;
    int ll = l;
    for (int i = 0; i <= l; i++)
    {
        if (abs(xx) + abs(yy) <= (i))
        {
            cout << i << endl;
            b = true;
            break;
        }
        ll = ll - 1;
        char c;
        if (i < l)
            c = s[i];
        if (c == 'E')
        {
            xx++;
        }
        else if (c == 'W')
        {
            xx--;
        }
        else if (c == 'N')
        {
            yy++;
        }
        else if (c == 'S')
        {
            yy--;
        }
        // cout << abs(xx) << " + " << abs(yy) << " <= " << (ll) << " " << (abs(xx) + abs(yy) <= (ll)) << endl;
        // if (abs(xx) + abs(yy) <= (ll--))
        // {
        //     cout << "POSSIBLE " << x << " " << y << endl;
        //     break;
        // }
    }
    return b;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        if (solve() == false)
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}