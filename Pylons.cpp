#include <bits/stdc++.h>
using namespace std;
#include <vector>
int caseNo = 1;
bool possible(int x, int y, vector<vector<int>> path, int startX, int startY)
{
    if ((x != startX) && (y != startY) && ((startX - startY) != (x - y)) && ((startX + startY) != (x + y)) && path[x][y] == -1)
    {
        return true;
    }
    return false;
}

bool recursion(int startX, int startY, int position, vector<vector<int>> path, int noOfRows, int noOfColumns)
{
    if (position == (noOfRows * noOfColumns))
    {
        cout << "Case #" << caseNo << ": POSSIBLE"
             << "\n";
        caseNo++;
        return true;
    }

    for (int i = 0; i < noOfRows; i++)
    {
        for (int j = 0; j < noOfColumns; j++)
        {
            if (possible(i, j, path, startX, startY))
            {
                path[i][j] = position;
                if (recursion(i, j, position + 1, path, noOfRows, noOfColumns))
                {
                    // s=s+" (" + to_string(i) + "," + to_string(j) + ") >";
                    cout << i + 1 << " " << j + 1 << " "
                         << "\n";
                    return true;
                }
                else
                {
                    path[i][j] = -1; //revert changes you have made
                }
            }
        }
    }
    return false;
}

int main()
{

    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    //int caseNo = 1;
    while (t--)
    {

        int noOfRows, noOfColumns;
        cin >> noOfRows;
        cin >> noOfColumns;
        int noOfCells = noOfColumns * noOfRows;
        // bool status[noOfRows][noOfColumns]; //true if visited
        vector<vector<int>> storePath; //true if visited
        vector<int> temp;
        for (int i = 0; i < noOfColumns; i++) //starting point
        {
            temp.push_back(-1);
        }
        for (int j = 0; j < noOfRows; j++)
        {
            storePath.push_back(temp);
        }
        bool b = false;
        for (int i = 0; i < noOfRows; i++)
        {
            for (int j = 0; j < noOfColumns; j++)
            {
                storePath[i][j] = 1;
                if (recursion(i, j, 1, storePath, noOfRows, noOfColumns))
                {
                    cout << i + 1 << " " << j + 1 << "\n";
                    b = true;
                    break;
                }
                storePath[i][j] = -1;
            }
            if (b == true)
            {
                break;
            }
        }
        if (b == false)
        {
            cout << "Case #" << caseNo << ": IMPOSSIBLE"
                 << "\n";
            caseNo++;
        }
    }
}