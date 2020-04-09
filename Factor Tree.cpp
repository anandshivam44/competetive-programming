#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void primeFactors(long long int n)
{
    vector<long> storeFactors;
    while (n % 2 == 0)
    {
        storeFactors.push_back(2);
        n = n / 2;
    }

    for (long long int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            storeFactors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        storeFactors.push_back(n);
    }
    storeFactors.push_back(-1);
    long temp = storeFactors[0];
    long count = 0;
    long long int finalAnswer = 1;
    for (long i = 0; i < storeFactors.size(); i++)
    {
        //cout << "  " << storeFactors[i] << "  "<< " == " << temp << " is " << (storeFactors[i] == temp) << "\n";
        cout << "  " << storeFactors[i];
        if (storeFactors[i] == temp)
        {
            count = count + 1;
        }
        else if (storeFactors[i] != temp)
        {
            //cout << " count is  " << count << " ";
            finalAnswer = finalAnswer * (1 + count);
            count = 1;
            temp = storeFactors[i];
        }
    }
    cout << finalAnswer << "\n";
}

bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
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
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                if (adj[u][i] == dest)
                    return true;
            }
        }
    }

    return false;
}

long long int printShortestDistance(vector<int> adj[], int source,
                          int dest, int v, int A[])
{

    int pred[v], dist[v];
    //cout << "\nsource " << source << " dest " << dest << " no of nodes " << v << " inside print shortest distance \n";
    if (BFS(adj, source, dest, v, pred, dist) == false)
    {
        // cout << "Given source and destination"
        //      << " are not connected";
        return 1;
    }

    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1)
    {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }


    long long int product = 1;
    for (int i = path.size() - 1; i >= 0; i--)
    {
        product = product * A[path[i] - 1];
        product=product%1000000007;
    }
    cout<<"Product = "<<product<<" ";
    return product;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b;

        vector<int> adj[n + 1];
        for (int i = 1; i <= n - 1; i++)
        {
            cin >> a;
            cin >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }


        int number_of_queries;
        cin >> number_of_queries;
        while (number_of_queries--)
        {
            int source, dest;
            long long int product = 1;
            cin >> source;
            cin >> dest;
            if (source != dest)
            {
                product = printShortestDistance(adj, source, dest, n, A);
            }
            else
            {
                product = A[source - 1];
            }
            primeFactors(product);

            //cout << "\nProduct is " << product << "\n";
        }
    }

    return 0;
}
