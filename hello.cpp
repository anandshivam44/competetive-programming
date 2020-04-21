#include <bits/stdc++.h>
using namespace std;
#include <vector>
int caseNo = 1;
bool possibleX(int x, int y, vector<vector<int>> path, int startX, int startY)
{
    if ((x + 1 == startX) || (x - 1 == startX) &&  path[x][y] == -1)
    {
        return true;
    }
    return false;
}
bool possibleY(int x, int y, vector<vector<int>> path, int startX, int startY)
{
    if ( (y + 1 == startY) || (y - 1 == startY) && path[x][y] == -1)
    {
        return true;
    }
    return false;
}

bool recursion(int startX, int startY, int position, vector<vector<int>> path, int noOfRows, int noOfColumns)
{
    if (position == 16 && startX == 3 && startY == 3)
    {
        cout << "Case #" << caseNo << ": POSSIBLE"
             << "\n";
        caseNo++;
        return true;
    }
    
    //if (recursion(i, j, position + 1, path, noOfRows, noOfColumns))
    if (startX+1>=0 && startX+1<=3)
    {
        recursion(startX+1, startY, position + 1, path, noOfRows, noOfColumns);
        
    }
    if (startX-1>=0 && startX-1<=3)
    {
        recursion(startX-1, startY, position + 1, path, noOfRows, noOfColumns);
    }
    if (startY+1>=0 && startY+1<=3)
    {
        recursion(startX, startY+1, position + 1, path, noOfRows, noOfColumns);
    }
    if (startY-1>=0 && startY-1<=3)
    {
        recursion(startX, startY-1, position + 1, path, noOfRows, noOfColumns);
    }
    

    
    return false;
}

int main()
{

    int noOfRows = 4, noOfColumns = 4;
    //cin >> noOfRows;
    //cin >> noOfColumns;
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
    storePath[0][0] = 1;
    if (recursion(0, 0, 1, storePath, noOfRows, noOfColumns))
    {
        cout << 0 + 1 << " " << 0 + 1 << "\n";
        b = true;
    }

    if (b == false)
    {
        cout << "Case #" << caseNo << ": IMPOSSIBLE"
             << "\n";
        caseNo++;
    }
}