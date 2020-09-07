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
    #define pb(x) push_back(x)
#define fill_my(arr, q) fill(all(arr), q)
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define mem(x,y) memset(x,y,sizeof(x));
int V = 6;

void deleteEdge(vector<int> adj[], int node1, int node2)
{
    delete_by_value(adj[node1], node2);
    delete_by_value(adj[node2], node1);
}

void addEdge(vector<int> adj[], int node1, int node2)
{
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

void BFS(vector<int> permanentTree[], int u, int v)
{
    // vector<int> adj[V + 1];
    // for (int i = 0; i <= v; i++)//copy vector
    // {
    //     for (int j = 0; j < permanentTree[i].size(); j++)
    //     {
    //         adj[i].push_back(permanentTree[i][j]);
    //     }
    // }
    // deleteEdge(permanentTree,u,v);//delete edge as said by alice

    list<int> queue;
    int visited[V + 1];
    memset(visited, 0, sizeof visited);

    int predecessor[V + 1], distance[V + 1];
    int childOf[V + 1];
    memset(predecessor, -1, sizeof predecessor);
    memset(childOf, -1, sizeof childOf);
    fill(distance, distance + V, INT_MAX);

    int source = 1;
    predecessor[source] = INT_MIN;
    distance[source] = 0;
    queue.push_back(source);
    visited[source] = true;

    while (queue.size() != 0)
    {

        int p = queue.front();
        cout << p << endl;
        queue.pop_front();

        for (int i = 0; i < permanentTree[p].size(); i++)
        {
            if (visited[permanentTree[p][i]] == false)
            {
                queue.push_back(permanentTree[p][i]);
                visited[permanentTree[p][i]] = true;
                predecessor[permanentTree[p][i]] = p;
                distance[permanentTree[p][i]] = distance[p] + 1;
                childOf[p] = permanentTree[p][i];
            }
        }
    }
    for (int i = 0; i < V + 1; i++)
    {
        cout << " predecessor of " << i << " is " << predecessor[i] << endl;
    }
    for (int i = 0; i < V + 1; i++)
    {
        cout << " distance " << i << " from source is " << distance[i] << endl;
    }
    for (int i = 0; i < V + 1; i++)
    {
        cout << " child of  " << i << "  is " << childOf[i] << endl;
    }
    cout << endl;

    deleteEdge(permanentTree, u, predecessor[u]);
    addEdge(permanentTree, u, v);
    for (int i = 0; i < V + 1; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < permanentTree[i].size(); j++)
        {
            cout << permanentTree[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < V + 1; i++)
    {
        cout << " predecessor of " << i << " is " << predecessor[i] << endl;
    }
    for (int i = 0; i < V + 1; i++)
    {
        cout << " distance " << i << " from source is " << distance[i] << endl;
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    V = n;
    int noOfCoins[n + 1];
    vector<int> adj[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> noOfCoins[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        addEdge(adj, a, b);
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int queries;
    cin >> queries;
    BFS(adj, 6, 2);
    for (int i = 1; i <= queries; i++)
    {
        int u, v;
        cin >> u, v;
        // BFS(adj, u, v);
    }
}

int main()
{
    solve();
    return 0;
}
