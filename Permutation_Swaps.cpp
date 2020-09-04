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
#define fill_my(arr, q) fill(all(arr), q)

int N, M;

void addEdge(vector<int> adj[], int node1, int node2)
{
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

bool BFS(vector<int> adj[], int source, int dest)
{
    list<int> queue;
    int visited[N+1];
    memset(visited, 0, sizeof visited);
    // for (int i = 0; i < N; i++)
    // {
    //     cout<<visited[i]<<" <> ";
    // }
    
    // memset(predecessor, -1, sizeof predecessor);
    // fill(distance, distance + v, INT_MAX);

    // int p = source;
    // predecessor[source] = INT_MIN;
    // distance[source] = 0;
    queue.push_back(source);
    visited[source] = true;

    while (queue.size() != 0)
    {

        int p = queue.front();
        // cout << p << " - " << endl;
        queue.pop_front();
        visited[p]=true;

        for (int i = 0; i < adj[p].size(); i++)
        {
            // cout<<"i = "<<i;
            if (visited[adj[p][i]] == false)
            {
                // cout << adj[p][i] << " + " << endl;
                queue.push_back(adj[p][i]);
                visited[adj[p][i]] = true;
                // predecessor[adj[p][i]] = p;
                // distance[adj[p][i]] = distance[p] + 1;
                if (adj[p][i] == dest)
                {
                    return true;
                }
            }
        }
    }
    // for (int i = 0; i < N; i++)
    // {
    //     cout<<visited[i]<<" <> ";
    // }
    return false;
}

bool solve()
{
    int n, m;
    cin >> n >> m;
    N = n;
    M = m;
    int p[n];
    int q[n];
    vector<int> adj[n + 2];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    // cout<<"hi"<<endl;
    for (int i = 0; i < m; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        // cout<<n1<<" "<<n2<<endl;
        addEdge(adj, n1, n2);
    }
    // cout<<"HI"<<endl;
    // for (int i = 0; i < n + 1; i++)
    // {
    //     cout << i << " : ";
    //     for (int j = 0; j < adj[i].size(); j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        if (p[i] != q[i])
        {
            int source = p[i], dest = q[i];
            if (BFS(adj, source, dest) == false)
            {
                return false;
            }
        }
    }

    return true;

    //cout <<a<<"\n";
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    FIO;

    int t;
    cin >> t;
    while (t--)
    {
        if (!solve())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}