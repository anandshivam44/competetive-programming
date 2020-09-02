#include <bits/stdc++.h>

using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
long long MOD = 1000000007;
long long INF = 1e18;
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
#define print_array(arr)                                                               \
    loop(z, sizeof(arr) / sizeof(arr[0])) if (arr[z] != 0) { cout << arr[z] << " "; }; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)

typedef long long ll;

int arr[50005], lvl[50005], n;

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void bfs(int curr)
{
    lvl[curr] = 1;
    deque<int> que;

    que.push_front(curr);

    int par;
    while (!que.empty())
    {
        cout << "executed" << endl;

        par = que.front();
        que.pop_front();

        if (par == n)
        {
            return;
        }

        if (lvl[arr[par]] == 0 || lvl[arr[par]] > lvl[par])
        {
            cout << "1 par = " << par << endl;
            showdq(que);
            que.push_front(arr[par]);
            lvl[arr[par]] = lvl[par];
        }

        if (lvl[par - 1] == 0)
        {
            cout << "2 par = " << par << endl;
            showdq(que);
            que.push_back(par - 1);
            lvl[par - 1] = lvl[par] + 1;
        }

        if (lvl[par + 1] == 0)
        {
            cout << "3 par = " << par << endl;
            showdq(que);
            que.push_back(par + 1);
            lvl[par + 1] = lvl[par] + 1;
        }
        for (int k = 0; k < 10; k++)
        {
            cout << lvl[k] << " ";
        }
        cout << endl;
    }
    cout << "------------------" << endl;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            lvl[i] = 0;
        }
        lvl[0] = -1;
        bfs(1);

        cout << lvl[n] - 1 << "\n";
    }
}

int main()
{
    FIO;
    solve();
}