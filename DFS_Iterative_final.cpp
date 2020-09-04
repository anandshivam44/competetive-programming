#include <bits/stdc++.h>
using namespace std;

int notVisited = 0, travelled = 1, reached = 2;

void addEdge(vector<int> adj[], int node1, int node2)
{
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

void dfs_iterative(vector<int> adj[], int source, int visited[])
{

    stack<int> stack;
    stack.push(source);
    while (stack.size() != 0)
    {
        int p = stack.top();
        visited[p] = travelled;
        int addedToQueue = 0;
        for (int i = 0; i < adj[p].size(); i++)
        {

            if (visited[adj[p][i]] == notVisited)
            {
                stack.push(adj[p][i]);
                visited[adj[p][i]] = travelled;
                // cout << "push " << adj[p][i] << endl;
                addedToQueue++;
            }
        }
        // cout << "added to queue " << addedToQueue << " where p = " << p << endl;
        if (addedToQueue == 0)
        {
            cout << p << " ";
            visited[p] = reached;
            stack.pop();
        }
    }
}

int main()
{
    int nodes, edges, x, y, noOfDistinctGraphs = 0;
    nodes = 15; //Number of nodes
    edges = 13; //Number of edges
    vector<int> adj[nodes + 1];
    int visited[nodes + 1];

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
        visited[i] = notVisited;

    int source = 1;
    cout << "DFS traversal in order ";
    int noOfGraphs = 0;
    for (int i = 1; i <= nodes; i++)
    {
        if (visited[i] == notVisited)
        {
            noOfGraphs++;
            dfs_iterative(adj, i, visited);
        }
    }
    cout << "No of Graphs = " << noOfGraphs << endl;

    return 0;
}