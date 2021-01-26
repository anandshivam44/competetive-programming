#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    cin >> A;

    vector<vector<int>> answer;
    vector<int> temp;
    int no_of_digits = floor(log10(A) + 1);
    for (int i = 1; i <= 2 * A - 1; i++)
    {
        temp.push_back(A);
    }
    for (int i = 1; i <= 2 * A - 1; i++)
    {
        answer.push_back(temp);
    }
    int C = (A * 2 - 1) / 2;
    for (int i = 0; i < 2 * A - 1; i++)
    {
        for (int j = 0; j < 2 * A - 1; j++)
        {
            answer[i][j] = 1.0 + max(abs(C - i), abs(j - C));
        }
    }
    for (int i = 0; i < A * 2 - 1; i++)
    {
        for (int j = 0; j < A * 2 - 1; j++)
        {
            // cout << answer[i][j] << " ";
            printf("%*d ", no_of_digits, answer[i][j]);
        }
        // cout << endl;
        printf("\n");
    }
}