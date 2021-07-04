#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int fibb[MAX];

void _initialize()
{
    for (int i = 0; i < MAX; i++)
    {
        fibb[i] = -1;
    }
}

int fibonacci(int n)
{
    if (fibb[n] == -1)
    {
        if (n <= 1)
        {
            fibb[n] = n;
        }
        else
        {
            fibb[n] = fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

    return fibb[n];
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return factorial(n - 1) * n;
}

int main()
{

    for (int i = 1; i < 10; i++)
    {
        _initialize();
        cout << fibonacci(i) << endl;
    }

    return 0;
}