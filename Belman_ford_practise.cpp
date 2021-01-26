#include <bits/stdc++.h>
using namespace std;
void belmanFord(int graph[][3], int vertex, int edges, int source)
{
    int answer[vertex];
    for (int i = 0; i < vertex; i++)
    {
        answer[i] = INT_MAX;
    }
    answer[source] = 0;
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    for (int i = 0; i < vertex - 1; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            if (answer[graph[j][0]] + graph[j][2] < answer[graph[j][1]])
            {
                answer[graph[j][1]] = answer[graph[j][0]] + graph[j][2];
            }
        }
    }

    for (int j = 0; j < edges; j++)
    {
        if (answer[graph[j][0]]!=INT_MAX && answer[graph[j][0]] + graph[j][2] < answer[graph[j][1]])
        {
            cout << "Graph contains negative weight cycle" << endl;
        }
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "    " << answer[i] << endl;
    }
}
int main()
{
    int vertex = 5;
    int edges = 8;
    int graph[][3] = {{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};
    int source = 0;
    belmanFord(graph, vertex, edges, source);
    return 0;
}
