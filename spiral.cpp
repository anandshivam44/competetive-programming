// Print a given matrix in spiral form
// Input:  1    2   3   4
//         5    6   7   8
//         9   10  11  12
//         13  14  15  16
// Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

#include <bits/stdc++.h>
using namespace std;

void print_spiral(int arr[4][4])
{

    int n = 4;
    int visited[n][n] = {0};
    int i = 0, j = 0;
    string direction = "right";
    for (int k = 0; k < n * n; k++)
    {
        cout << arr[i][j] << " ";
        visited[i][j] = true;

        if (direction == "right")
        {

            if (j + 1 >= n || visited[i][j + 1] == true)
            {
                direction = "down";
                i++;
            }
            else
            {
                j++;
            }
        }
        else if (direction == "down")
        {

            if (i + 1 >= n || visited[i + 1][j] == true)
            {
                direction = "left";
                j--;
            }
            else
            {
                i++;
            }
        }
        else if (direction == "left")
        {
            if (j - 1 < 0 || visited[i][j - 1] == true)
            {
                direction = "up";
                i--;
            }
            else
            {
                j--;
            }
        }
        else if (direction == "up")
        {
            if (i - 1 < 0 || visited[i - 1][j] == true)
            {
                direction = "right";
                j++;
            }
            else
            {
                i--;
            }
        }
    }
}

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    print_spiral(arr);
    return 0;
}