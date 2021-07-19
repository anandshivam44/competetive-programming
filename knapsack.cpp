#include <bits/stdc++.h>
using namespace std;

int knapSack(int maxWeight, int weights[], int values[], int n)
{

    int dp[n + 1][maxWeight + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= maxWeight; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (w >= weights[i - 1])
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][maxWeight];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n) << endl;

    return 0;
}