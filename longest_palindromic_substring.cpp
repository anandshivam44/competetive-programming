#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string str)
{
    int n = str.size();
    int maxLength = 1;

    bool table[n][n];
    memset(table, 0, sizeof(table));

    for (int i = 0; i < n; i++)
    {
        table[i][i] = 1;
    }

    /**
     * Till length 2 calculate it manually
    */
    int start = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            table[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }
    /**
     * From length 3 start DP
    */
    for (int k = 3; k <= n; k++)
    {

        for (int i = 0; i < n - k + 1; i++)
        {
            if (str[i] == str[i + k - 1] && table[i + 1][i + k - 2] == true)
            {
                table[i][i + k - 1] = true;
                if (k > maxLength)
                {
                    maxLength = k;
                    start = i;
                }
            }
        }
    }

    for (int i = start; i <= start + maxLength - 1; i++)
    {
        cout << str[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << table[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return maxLength;
}

int main()
{
    string str = "aaaabbaa";
    cout << "Longest substring is: " << endl
         << longestSubstring(str) << endl;

    return 0;
}