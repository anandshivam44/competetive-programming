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

const int MAX = 1002;

// int logg = 10; // logg2(MAX
vector<int> tree[MAX];
int maxHeight = MAX;
int level[MAX], LCA[MAX][MAX];

int calculateNimSum(vector<int> piles)
{
    int n = piles.size();
    int i, nimsum = piles[0];
    for (i = 1; i < n; i++)
        nimsum = nimsum ^ piles[i];
    return (nimsum);
}

void dfs(int node, int lvl, int par)
{
    level[node] = lvl;
    LCA[node][0] = par;

    for (int child : tree[node])
        if (child != par)
        {
            dfs(child, lvl + 1, node);
        }
}

void init(int n)
{
    dfs(1, 0, -1);

    for (int i = 1; i <= maxHeight; i++)
    {
        for (int j = 1; j <= n; j++)
            if (LCA[j][i - 1] != -1)
            {
                int par = LCA[j][i - 1];
                LCA[j][i] = LCA[par][i - 1];
            }
    }
}

int getLCA(int a, int b)
{
    if (level[b] < level[a])
        swap(a, b);

    int d = level[b] - level[a];

    while (d > 0)
    {
        int i = log2(d);
        b = LCA[b][i];

        d -= 1 << i;
    }

    if (a == b)
        return a;

    for (int i = maxHeight; i >= 0; i--)
        if (LCA[a][i] != -1 && (LCA[a][i] != LCA[b][i]))
        {
            a = LCA[a][i], b = LCA[b][i];
        }

    return LCA[a][0];
}

int getDist(int a, int b)
{
    int lca = getLCA(a, b);
    return level[a] + level[b] - 2 * level[lca];
}

void solve()
{
    int n;
    scanf("%d", &n);
    // MAX = n + 2; // look into it
    // logg = (int)ceil(log2(n));//applicable for binary tree only
    // vector<int> tree[n + 1];
    maxHeight = n + 1;

    for (int i = 0; i <= n + 1; i++)
    {
        tree[i].clear();
        level[i] = 0;
        for (int j = 0; j <= maxHeight; j++)
            LCA[i][j] = -1;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        tree[x].push_back(y), tree[y].push_back(x);
    }
    int coins[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &coins[i]);
    }
    init(n);

    ll answer = 0;
    // int q;
    // scanf("%d",&q);
    for (int r = 1; r <= n; r++)
    {
        vector<int> gg;
        for (int i = 1; i <= n; i++)
        {
            if (i != r && coins[i] % 2 == 1)
            {
                gg.push_back(getDist(r, i));
                // cout << "Distance btw " << r << " and " << i << " is " << findDistance(r, i, level, commonParent, dist) << endl;
            }
        }
        if (calculateNimSum(gg) == 0)
        {
            answer += (((ll)(1)) << r);
            answer %= mod;
        }
    }

    // cout << answer << "\n";
    printf("%lld\n", answer);
    answer = 0;
}

int main()
{

    FIO;

    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}