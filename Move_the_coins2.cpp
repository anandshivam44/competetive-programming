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
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());

void addEdge(vector<int> adj[], int node1, int node2)
{
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int calculateNimSum(vector<int> piles)
{
    int n = piles.size();
    int i, nimsum = piles[0];
    for (i = 1; i < n; i++)
        nimsum = nimsum ^ piles[i];
    return (nimsum);
}

// int BFS(vector<int> adj[], int source, int v, int coins[])
// {
//     // int predecessor[v+1];
//     int distance[v + 1];
//     // memset(predecessor, -1, sizeof predecessor);
//     fill(distance, distance + v + 1, INT_MAX);

//     list<int> queue;
//     int visited[v + 1];
//     memset(visited, 0, sizeof visited);

//     // predecessor[source] = INT_MIN;
//     distance[source] = 0;
//     queue.push_back(source);
//     visited[source] = true;

//     while (queue.size() != 0)
//     {

//         int p = queue.front();
//         // cout << p << " ";
//         queue.pop_front();

//         for (int i = 0; i < adj[p].size(); i++)
//         {
//             if (visited[adj[p][i]] == false)
//             {
//                 queue.push_back(adj[p][i]);
//                 visited[adj[p][i]] = true;
//                 // predecessor[adj[p][i]] = p;
//                 distance[adj[p][i]] = distance[p] + 1;
//             }
//         }
//     }
//     // print_array(distance);
//     // print_array(predecessor);

//     // for (int i = 0; i <= v; i++)
//     // {
//     //     cout << "Predecessor of " << i << " is " << predecessor[i] << endl;
//     // }
//     vector<int> gg;
//     for (int i = 1; i <= v; i++)
//     {
//         // cout << "Distance from Source  " << i << " is " << distance[i] << endl;
//         if (coins[i] % 2 == 1 && i != source)
//         {
//             gg.push_back(distance[i]);
//         }
//     }

//     return calculateNimSum(gg);
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> tree[n + 1];

    for (int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        addEdge(tree, x, y);
    }
    int coins[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> coins[i];
    }
    ll answer = 0;
    for (int r = 1; r <= n; r++)
    {
        if (BFS(tree, r, n, coins) == 0)
        {
            answer += (((ll)1) << r);
            answer %= mod;
        }

        // cout << endl;
        // cout << endl;
    }

    cout << answer << "\n";
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
        solve();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}