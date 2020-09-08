// C++ Program to find distance
// between two nodes using LCA

#include <bits/stdc++.h>
using namespace std;

int MAX = 1000;

int logg = 10; // logg2(MAX)

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

// Pre-Processing to calculate
// values of lca[][], dist[][]
void dfs(vector<int> graph[], int node, int parent, int h, int cost, int level[], vector<int> commonParent[], vector<int> dist[])
{

    commonParent[node][0] = parent;

    // Storing the level of
    // each node
    level[node] = h;
    if (parent != -1)
    {
        dist[node][0] = cost;
    }

    for (int i = 1; i < logg; i++)
    {
        if (commonParent[node][i - 1] != -1)
        {

            // Using recursion formula to
            // calculate the values of
            // lca[][] and dist[][]
            commonParent[node][i] = commonParent[commonParent[node][i - 1]][i - 1];

            dist[node][i] = dist[node][i - 1] + dist[commonParent[node][i - 1]][i - 1];
        }
    }

    for (auto i : graph[node])
    {
        if (i == parent)
            continue;
        dfs(graph, i, node, h + 1, 1, level, commonParent, dist);
    }
}

// Function to find the distance
// between given nodes u and v
void findDistance(int u, int v, int level[], vector<int> commonParent[], vector<int> dist[])
{

    int ans = 0;

    if (level[u] > level[v])
        swap(u, v);

    for (int i = logg - 1; i >= 0; i--)
    {

        if (commonParent[v][i] != -1 && level[commonParent[v][i]] >= level[u])
        {

            ans += dist[v][i];
            v = commonParent[v][i];
        }
    }

    if (v == u)
    {

        cout << ans << endl;
    }

    else
    {

        for (int i = logg - 1; i >= 0; i--)
        {

            if (commonParent[v][i] != commonParent[u][i])
            {

                ans += dist[u][i] + dist[v][i];

                v = commonParent[v][i];
                u = commonParent[u][i];
            }
        }

        ans += dist[u][0] + dist[v][0];

        cout << ans << endl;
    }
}

int main()
{
    vector<int> graph[MAX];
    int n = 5;
    MAX = n + 2;

    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 2, 5);
    int level[MAX];

    // logg = (int)ceil(log2(n));
    logg = (int)ceil(log2(n));

    vector<int> commonParent[MAX];
    vector<int> dist[MAX];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < logg; j++)
        {
            commonParent[i].push_back(-1);
            dist[i].push_back(0);
        }
    }
    cout << "Hello" << endl;

    dfs(graph, 1, -1, 0, 1, level, commonParent, dist);

    findDistance(1, 3, level, commonParent, dist);

    findDistance(2, 3, level, commonParent, dist);

    findDistance(3, 5, level, commonParent, dist);

    return 0;
}
