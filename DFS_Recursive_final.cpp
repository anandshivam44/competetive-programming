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
            dfs(adj, adj[s][i], visited);
            cout << adj[s][i] << " ";
        }
    }
}

void addEdge(vector<int> adj[], int node1, int node2)
{
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

int main()
{

    int nodes, edges, x, y, noOfDistinctGraphs = 0;
    nodes = 15; //Number of nodes
    edges = 13; //Number of edges
    vector<int> adj[nodes + 1];
    bool visited[nodes + 1];

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 6);
    addEdge(adj, 3, 7);
    addEdge(adj, 4, 8);
    addEdge(adj, 4, 9);
    addEdge(adj, 5, 10);
    addEdge(adj, 5, 11);
    addEdge(adj, 6, 12);
    addEdge(adj, 6, 13);
    addEdge(adj, 15, 14);
    // addEdge(adj, 7, 15);

    for (int i = 0; i < 20; ++i)
        visited[i] = false;

    for (int i = 1; i <= nodes; ++i)
    {
        if (visited[i] == false)
        {
            dfs(adj, i, visited);
            noOfDistinctGraphs++;
        }
    }
    cout << "\nNumber of Graphs " << noOfDistinctGraphs << endl;
    return 0;
}