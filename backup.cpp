#include <bits/stdc++.h>
using namespace std;

bool checkIfAllTrue(vector<vector<bool>> status)
{
    bool b = true;
    for (int i = 0; i < status.size(); i++)
    {
        for (int j = 0; j < status[i].size(); j++)
        {
            //cout << status[i][j] << " ("<<i<<","<<j<<") ";
            if (status[i][j] == false)
            {
                b = false;
                break;
            }
        }
        //cout << "--\n";
    }
    //cout << "\n";
    return b;
}

bool divideAndConquer(int startingRow, int startingColumn, vector<vector<bool>> status, string s)
{
    //status[startingRow][startingColumn] = true;
    if (checkIfAllTrue(status) == true)
    {
        cout << "\n"
             << s << " return true\n";
        return true;
    }
    

    for (int i = 0; i < status.size(); i++) //starting point
    {
        for (int j = 0; j < status[i].size(); j++)
        {
            if ((status[i][j] == false) && (i != startingRow) && (startingColumn != j) && ((startingRow - startingColumn) != (i - j)) && ((startingRow + startingColumn) != (i + j)))
            {
                s += " (" + to_string(i) + "," + to_string(j) + ") >";
                status[i][j] = true;
                bool t = divideAndConquer(i, j, status, s);
                if (t)
                {
                    return true;
                }
            }
            
        }
    }
    status[startingRow][startingColumn] = true;
    cout << "\nreturn false at last " << s << "\n";
    return 0;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int noOfRows, noOfColumns;
        cin >> noOfRows;
        cin >> noOfColumns;
        int squares_left = noOfColumns * noOfRows;
        // bool status[noOfRows][noOfColumns]; //true if visited
        vector<vector<bool>> status; //true if visited
        vector<bool> temp;
        for (int i = 0; i < noOfColumns; i++) //starting point
        {
            temp.push_back(false);
        }
        for (int j = 0; j < noOfRows; j++)
        {
            status.push_back(temp);
        }

        bool b;
        for (int i = 0; i < noOfRows; i++) //starting point
        {
            for (int j = 0; j < noOfColumns; j++)
            {
                //status[i][j] = true; //should be inside recursive function remove asap
                cout << "Start with " << i << " " << j << "\n";
                string s = " (" + to_string(i) + "," + to_string(j) + ") >";
                b = divideAndConquer(i, j, status, s);
                if (b)
                {
                    break;
                }
            }
            if (b)
            {
                break;
            }
        }
        if (b)
        {
            cout << "POSSIBLE\n";
        }
        else
        {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}