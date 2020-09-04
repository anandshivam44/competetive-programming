#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;

    for (int i = 0; i < adj[s].size(); ++i)
    {
        if (visited[adj[s][i]] == false)
        {
            // visited[adj[s][i]] = true;
            // cout << adj[s][i] << " ";
            // cout << adj[s][i] << " ";
            dfs(adj, adj[s][i], visited);
            cout << adj[s][i] << " ";
        }
    }
}

void

int main()
{
    vector<int> adj[20];
    bool visited[20];
    int nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes; //Number of nodes
    cin >> edges; //Number of edges
    for (int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        //Undirected Graph
        adj[x].push_back(y); //Edge from vertex x to vertex y
        adj[y].push_back(x); //Edge from vertex y to vertex x
    }

    for (int i = 0; i < 20; ++i)
        visited[i] = false;

    for (int i = 1; i <= nodes; ++i)
    {
        if (visited[i] == false)
        {
            dfs(adj, i, visited);
            connectedComponents++;
        }
    }
    cout << "\nNumber of Graphs " << connectedComponents << endl;
    return 0;
}