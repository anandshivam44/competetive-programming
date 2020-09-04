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

int N = 2, M = 2;

// void BFS(int *grid, int startX, int startY, int n, int m, int *distance)
// {
//     // int dis[n][m]=&distance;
//     list<int> queue;
//     bool visited[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             visited[n][m] = false;
//         }
//     }

//     distance[startX][startY] = 0;
//     queue.push_back(source);
//     visited[source] = true;

//     while (queue.size() != 0)
//     {

//         int p = queue.front();
//         cout << p << " ";
//         queue.pop_front();

//         for (int i = 0; i < adj[p].size(); i++)
//         {
//             if (visited[adj[p][i]] == false)
//             {
//                 queue.push_back(adj[p][i]);
//                 visited[adj[p][i]] = true;
//                 predecessor[adj[p][i]] = p;
//                 distance[adj[p][i]] = distance[p] + 1;
//             }
//         }
//     }
// }

void solve()
{
    int n, m;
    cin >> n >> m;
    int grid[n][m];
    int startK;
    int startH;
    N = n;
    M = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            // cout << grid[i][j] << " ";
            if (grid[i][j] == 2)
            {
                startK = i;
                startH = j;
            }
        }
        // cout << endl;
    }
    // cout << " startk = " << startK << " starth = " << startH << endl;

    int distance[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            distance[i][j] = -1;
        }
    }
    /////////////////////BFS

    list<pair<int, int>> queue;
    bool visited[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = false;
        }
    }

    distance[startK][startH] = 0;
    queue.emplace_back(startK, startH);
    visited[startK][startH] = true;

    if (startK == 0 || startK == n - 1 || startH == 0 || startH == m - 1)
    {
        cout << 0;
        return;
    }

    while (queue.size() != 0)
    {

        int k = queue.front().first;
        int h = queue.front().second;
        // cout << " k = " << k << " h = " << h << endl;
        queue.pop_front();
        visited[k][h] == true;

        if (k + 1 >= 0 && k + 1 <= n - 1 && h >= 0 && h <= m - 1)
        {
            if (visited[k + 1][h] == false && grid[k + 1][h] == 0)
            {
                queue.emplace_back(k + 1, h);
                visited[k + 1][h] = true;
                distance[k + 1][h] = distance[k][h] + 1;
                // cout << " 11 " << endl;
                if (k + 1 == 0 || k + 1 == n - 1 || h == 0 || h == m - 1)
                {
                    // cout << " k* = " << k << " h* = " << h << endl;
                    cout << distance[k + 1][h];
                    return;
                }
            }
        }
        if (k - 1 >= 0 && k - 1 <= n - 1 && h >= 0 && h <= m - 1)
            if (visited[k - 1][h] == false && grid[k - 1][h] == 0)
            {
                queue.emplace_back(k - 1, h);
                visited[k - 1][h] = true;
                distance[k - 1][h] = distance[k][h] + 1;
                // cout << " 22 " << endl;
                if (k - 1 == 0 || k - 1 == n - 1 || h == 0 || h == m - 1)
                {
                    // cout << " k* = " << k << " h* = " << h << endl;
                    cout << distance[k - 1][h];
                    return;
                }
            }
        if (k >= 0 && k <= n - 1 && h + 1 >= 0 && h + 1 <= m - 1)
            if (visited[k][h + 1] == false && grid[k][h + 1] == 0)
            {
                queue.emplace_back(k, h + 1);
                visited[k][h + 1] = true;
                distance[k][h + 1] = distance[k][h] + 1;
                // cout << " 33 " << endl;
                if (k == 0 || k == n - 1 || h + 1 == 0 || h + 1 == m - 1)
                {
                    // cout << " k* = " << k << " h* = " << h << endl;
                    cout << distance[k][h + 1];
                    return;
                }
            }
        if (k >= 0 && k <= n - 1 && h - 1 >= 0 && h - 1 <= m - 1)
            if (visited[k][h - 1] == false && grid[k][h - 1] == 0)
            {
                queue.emplace_back(k, h - 1);
                visited[k][h - 1] = true;
                distance[k][h - 1] = distance[k][h] + 1;
                // cout << " 44 " << endl;
                if (k == 0 || k == n - 1 || h - 1 == 0 || h - 1 == m - 1)
                {
                    // cout << " k* = " << k << " h* = " << h << endl;
                    cout << distance[k][h - 1];
                    return;
                }
            }
    }
    cout << -1;
    return;
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    FIO;

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