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

void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

bool BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[])
{

    list<int> queue;

    bool visited[v];

    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);

    while (!queue.empty())
    {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (visited[adj[u][i]] == false)
            {
                visited[adj[u][i]] = true;
                cout << "Visited " << adj[u][i] << " True " << endl;
                cout << "Dist " << adj[u][i] << " " << dist[u] + 1 << endl;
                dist[adj[u][i]] = dist[u] + 1;

                cout << "Predecessor " << adj[u][i] << " = " << u << endl;

                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                // We stop BFS when we find
                // destination.
                if (adj[u][i] == dest)
                {
                    cout << "visted " << endl;
                    for (int j = 0; j < v; j++)
                    {
                        cout << j << ":" << ((visited[j]) ? " Yes " : " No ") << " ";
                        cout << endl;
                    }
                    cout << endl;
                    cout << "predecessor " << endl;
                    for (int j = 0; j < v; j++)
                    {
                        cout << j << ":" << pred[j] << " ";
                        cout << endl;
                    }
                    cout << endl;
                    return true;
                }
            }
        }
    }

    return false;
}

void printShortestDistance(vector<int> adj[], int s, int dest, int v)
{
    int pred[v], dist[v];

    if (BFS(adj, s, dest, v, pred, dist) == false)
    {
        cout << "Given source and destination"
             << " are not connected";
        return;
    }

    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1)
    {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    cout << "Shortest path length is : "
         << dist[dest];

    cout << "\nPath is::\n";
    for (int i = path.size() - 1; i >= 0; i--)
        cout << path[i] << " ";
}

void solve()
{

    int v = 8;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 7);
    add_edge(adj, 4, 5);
    add_edge(adj, 4, 6);
    add_edge(adj, 4, 7);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
    int source = 0, dest = 7;
    for (int i = 0; i < v; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    printShortestDistance(adj, source, dest, v);
    return;

    // ll n, a;
    // cin >> n >> a;

    // for (int i = 0; i < n; i++)
    // {

    // }

    //cout <<a<<"\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}