#include <bits/stdc++.h>
using namespace std;
int v;

void addEdge(vector<int> adj[], int source, int destination)
{
    adj[source].push_back(destination);
    adj[destination].push_back(source);
}

void BFS(vector<int> adj[], int source, int predecessor[], int distance[])
{
    list<int> queue;
    int visited[v];
    memset(visited, 0, sizeof visited);
    predecessor[source] = INT_MIN;
    distance[source] = 0;
    queue.push_back(source);
    visited[source] = true;

    while (queue.size() != 0)
    {

        int p = queue.front();
        // cout << p << " ___ ";
        queue.pop_front();

        for (int i = 0; i < adj[p].size(); i++)
        {
            if (visited[adj[p][i]] == false)
            {
                queue.push_back(adj[p][i]);
                visited[adj[p][i]] = true;
                predecessor[adj[p][i]] = p;
                distance[adj[p][i]] = distance[p] + 1;
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    v = n + 1;
    vector<int> adj[v];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        addEdge(adj, x, y);
    }
    // for (int i = 0; i < v; i++)
    // {
    //     cout << i << " : ";
    //     for (int j = 0; j < adj[i].size(); j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int source = 1, dest = n;
    int predecessor[v], distance[v];
    memset(predecessor, -1, sizeof predecessor);
    fill(distance, distance + v, INT_MAX);

    BFS(adj, source, predecessor, distance);
    // shortestPath(adj, source, dest, predecessor, distance);
    // for (int i = 0; i < v; i++)
    // {
    //     cout << "Predecessor of " << i << " is " << predecessor[i] << endl;
    // }
    // for (int i = 0; i < v; i++)
    // {
    //     cout << "Distance from Source  " << i << " is " << distance[i] << endl;
    // }
    cout << (abs(distance[source] - distance[dest])) << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
