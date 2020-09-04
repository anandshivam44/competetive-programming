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
        queue<int> que({0});
        while (que.size())
        {
            int pointer = que.front();
            cout << pointer << " _ " << endl;
            que.pop();
            if (visited[pointer])
                continue;
            visited[pointer] = 1;
            vector<int> self({pointer});
            while (arr[self.back()] != pointer)
            {
                self.push_back(arr[self.back()]);
                dis[self.back()] = dis[pointer];
                visited[self.back()] = 1;
            }
            auto add = [&](int j) {
                if (dis[j] <= dis[pointer] + 1)
                    return;
                dis[j] = dis[pointer] + 1;
                que.push(j);
            };
            for (auto i : self)
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
