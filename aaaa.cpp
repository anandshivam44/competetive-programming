#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int source, int destination)
{
    adj[source].push_back(destination);
    adj[destination].push_back(source);
}
void change(int *arr)
{
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
}
void swap(int a, int b)
{
    a = 30;
    b = 60;
}

void solve()
{


    int arr[] = {1, 2, 3, 4, 5};
    change(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }

    int a = 5;
    int b = 10;
    cout << "A = " << a << " B = " << b << endl;
    swap(a, b);
    cout << "A = " << a << " B = " << b << endl;
}

int main()
{
    solve();
    return 0;
}