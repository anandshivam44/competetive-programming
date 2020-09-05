#include <bits/stdc++.h>
using namespace std;
int v = 6;

void addEdge(vector<int> adj[], int node1, int node2)
{
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

void BFS(vector<int> adj[], int source, int predecessor[], int distance[])
{
    list<int> queue;
    int visited[v];
    memset(visited, 0, sizeof visited);
    // memset(predecessor, -1, sizeof predecessor);
    // fill(distance, distance + v, INT_MAX);

    // int p = source;
    predecessor[source] = INT_MIN;
    distance[source] = 0;
    queue.push_back(source);
    visited[source] = true;

    while (queue.size() != 0)
    {

        int p = queue.front();
        cout << p << " ";
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

void shortestPath(vector<int> adj[], int source, int destination, int predecessor[], int successor[])
{
    vector<int> path_in_reverse;
    int p = destination;
    path_in_reverse.push_back(destination);
    while (predecessor[p] != -1)
    {
        if (p == source)
        {
            break;
        }

        path_in_reverse.push_back(predecessor[p]);
        p = predecessor[p];
    }
    for (int i = path_in_reverse.size() - 1; i >= 0; i--)
    {
        cout << path_in_reverse[i] << " ";
    }
}

void solve()
{
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 0);
    int source = 0, dest = 3;
    // for (int i = 0; i < v; i++)
    // {
    //     cout << i << " : ";
    //     for (int j = 0; j < adj[i].size(); j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int predecessor[v], distance[v];
    memset(predecessor, -1, sizeof predecessor);
    fill(distance, distance + v, INT_MAX);

    BFS(adj, 0, predecessor, distance);

    for (int i = 0; i < v; i++)
    {
        cout << "Predecessor of " << i << " is " << predecessor[i] << endl;
    }
    for (int i = 0; i < v; i++)
    {
        cout << "Distance from Source  " << i << " is " << distance[i] << endl;
    }
    cout << "Shortest path from " << source << " to " << dest << " is ";
    shortestPath(adj, source, dest, predecessor, distance);
    cout << endl
         << "Distance = " << (abs(distance[source] - distance[dest]));

    // for (int i = 0; i < 10; i++)
    // {
    //     if (BFS(adj, 0, i))
    //     {
    //         cout << i << " Found" << endl;
    //     }
    //     else
    //     {
    //         cout << i << " Not Found" << endl;
    //     }
    // }
    // bool found = false;

    // list<int> queue;
    // int visited[v];
    // for (int i = 0; i < v; i++)
    // {
    //     visited[i] = false;
    // }

    // int p = source;
    // queue.push_back(p);
    // visited[p] = true;

    // while (queue.size() != 0)
    // {

    //     p = queue.front();
    //     cout << p << " ";
    //     queue.pop_front();
    //     for (int i = 0; i < adj[p].size(); i++)
    //     {
    //         if (visited[adj[p][i]] == false)
    //         {
    //             queue.push_back(adj[p][i]);
    //             visited[adj[p][i]] = true;
    //             if (adj[p][i] == dest)
    //             {
    //                 found = true;
    //                 break;
    //             }
    //         }
    //         if (found == true)
    //         {
    //             break;
    //         }
    //     }
    //     if (found == true)
    //     {
    //         break;
    //     }
    // }
    // if (found == true)
    // {
    //     cout << dest << " Found" << endl;
    // }
    // else
    // {
    //     cout << dest << " Not Found" << endl;
    // }
}

int main()
{
    solve();
    return 0;
}

// CPP code for printing shortest path between
// two vertices of unweighted graph
// #include <bits/stdc++.h>
// using namespace std;

// // utility function to form edge between two vertices
// // source and dest
// void add_edge(vector<int> adj[], int src, int dest)
// {
// 	adj[src].push_back(dest);
// 	adj[dest].push_back(src);
// }

// // Driver program to test above functions
// int main()
// {
// 	int v = 8;
// 	vector<int> adj[v];
// 	add_edge(adj, 0, 1);
// 	add_edge(adj, 0, 3);
// 	add_edge(adj, 1, 2);
// 	add_edge(adj, 3, 4);
// 	add_edge(adj, 3, 7);
// 	add_edge(adj, 4, 5);
// 	add_edge(adj, 4, 6);
// 	add_edge(adj, 4, 7);
// 	add_edge(adj, 5, 6);
// 	add_edge(adj, 6, 7);
// 	int source = 0, dest = 7;
// 	return 0;
// }
