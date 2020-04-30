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

static bool comparator(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b)
{
    if (a.first.first < b.first.first || (!(b.first.first < a.first.first) && (a.first.second < b.first.second)))
        return 1;
    else
        return 0;
}
int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int q;
    cin >> q;
    vector<pair<pair<int, int>, int>> v;
    for (int i = 0; i < q; i++)
    {
        int x, y, count = 0;
        cin >> x >> y;
        v.emplace_back(make_pair(x, y), i);
        //cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
    }
    sort(begin(v), end(v), comparator);
    for (int i = 0; i < q; i++)
    {
        cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
    }

    // for (int i = x; i <= y; i++)
    // {
    //     if (s[i] <= 90)
    //     {
    //         s[i] += 32;
    //     }
    //     if (s[i] == max)
    //     {
    //         count++;
    //     }
    //     else if (s[i] > max)
    //     {
    //         count = 1;
    //         max = s[i];
    //     }
    // }
    // cout << count << "\n";
    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC << " sec" << endl;
    return 0;
}
