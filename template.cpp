#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)


void solve()
{
}

int main()
{
    clock_t time_req;
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    cout << "Processor time " << (float)time_req / CLOCKS_PER_SEC
         << " sec" << endl;
    return 0;
}
