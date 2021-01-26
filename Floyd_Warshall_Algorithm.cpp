#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 4
#define INF 9999

void print(int graph[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
            {
                cout << "INF  ";
            }
            else
            {
                cout << graph[i][j] << "    ";
            }
        }
        cout << endl;
    }
}
void floyd(int graph[n][n])
{
    int solution[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            solution[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (solution[i][j] > solution[i][k] + solution[k][j])
                {
                    solution[i][j] = solution[i][k] + solution[k][j];
                }
            }
        }
    }
    print(solution);
}

int main()
{
    int graph[n][n] = {{0, 5, INF, 10},
                       {INF, 0, 3, INF},
                       {INF, INF, 0, 1},
                       {INF, INF, INF, 0}};
    floyd(graph);
    return 0;
}