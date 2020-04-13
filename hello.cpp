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
    cout << "Case #" << caseNo << ":   POSSIBLE "
         <<noOfRows<<" x "<<noOfColumns<<"\n";
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
  int q=7;
  int noOfRows, noOfColumns;
  for (int A = 2; A <= 7; A++)
  {
    for (int B = 2; B <= 7; B++)
    {
      noOfRows = A;
      noOfColumns = B;
      int noOfCells = noOfColumns * noOfRows;
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
            // cout << i + 1 << " " << j + 1 << "\n";
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
        cout << "Case #" << caseNo << ": IMPOSSIBLE "
             <<A<<" x "<<B<<"\n";
        caseNo++;
      }
    }
  }
}