#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int num = 1;
    while (t--)
    {
        int order;
        cin >> order;
        int arr[order][order];
        int trace = 0;
        int rowsRepeat = 0;
        int columnRepeat = 0;
        int sum = 0;
        for (int i = 0; i < order; i++)
        {
            sum = sum + i + 1;
            for (int j = 0; j < order; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < order; i++)
        {
            bool checkRow[order + 1] = {false};
            bool checkColumn[order + 1] = {false};
            trace = trace + arr[i][i];
            for (int j = 0; j < order; j++)
            {
                checkRow[arr[i][j]] = true;
                checkColumn[arr[j][i]] = true;
            }
            for (int k = 1; k <= order; k++)
            {
                if (checkRow[k] == false)
                {
                    rowsRepeat++;
                    break;
                }
            }
            for (int k = 1; k <= order; k++)
            {
                if (checkColumn[k] == false)
                {
                    columnRepeat += 1;
                    break;
                }
            }
        }
        cout << "Case #" << num << ": " << trace << " " << rowsRepeat << " " << columnRepeat << "\n";
        num++;
    }

    return 0;
}
