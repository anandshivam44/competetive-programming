#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;
int n, dis[maxn], arr[maxn];
bool visited[maxn];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i], arr[i]--;
        fill(dis + 1, dis + n, n);
        memset(visited, 0, sizeof visited);
        queue<int> q({0});
        while (q.size())
        {
            int pointer = q.front();
            cout << pointer << " _ " << endl;
            q.pop();
            if (visited[pointer])
                continue;
            visited[pointer] = 1;
            vector<int> queue({pointer});
            while (arr[queue.back()] != pointer)
            {
                queue.push_back(arr[queue.back()]);
                dis[queue.back()] = dis[pointer];
                visited[queue.back()] = 1;
            }
            auto add = [&](int j) {
                if (dis[j] <= dis[pointer] + 1)
                    return;
                dis[j] = dis[pointer] + 1;
                q.push(j);
            };
            for (auto i : queue)
            {
                if (i)
                    add(i - 1);
                if (i < n - 1)
                    add(i + 1);
            }
        }
        cout << dis[n - 1] << '\n';
    }
}
