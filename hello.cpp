#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define pll pair<lli, lli>
#define vl vector<lli>
#define vll vector<pll>
#define mll map<lli, lli>
#define mpl map<pii, lli>
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define hell 1000000007
#define rep(i, a, b) for (i = a; i < b; i++)
#define it(b) for (auto it = b.begin(); it != b.end(); it++)

using namespace std;
lli tc;
void solve()
{
    lli u, i, n, j, l;
    string str;
    map<char, lli> m;
    vector<pair<lli, string>> v;
    vector<char> v1;
    cin >> u;
    if (u > 2)
        return;
    rep(i, 0, 9999)
    {
        cin >> n >> str;

        v.pb(make_pair(n, str));
    }
    sort(all(v));
    rep(i, 0, 9999)
    {
        l = v[i].second.length();
        rep(j, 0, l)
        {
            if (!m.count(v[i].second[j]))
            {
                v1.pb(v[i].second[j]);
                m[v[i].second[j]] = 1;
            }
        }
    }
    cout << "Case #" << tc << ": " << v1[v1.size() - 1];
    rep(i, 0, 9)
            cout
        << v1[i];

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli t;
    tc = 0;
    cin >> t;
    for (tc = 1; tc <= t; tc++)
    {
        solve();
    }
    return 0;
}