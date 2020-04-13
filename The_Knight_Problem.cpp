#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int order;
void printSolution(int sol[8][8])
{
    for (int x = 0; x < 8; x++)
    {
        for (int y = 0; y < 8; y++)
            printf(" %2d ", sol[x][y]);
        printf("\n");
    }
}

bool isSafe(int x, int y, int sol[8][8])
{
    return (x >= 0 && x < 8 && y >= 0 && y < 8 && sol[x][y] == -1);
}

int solveKTUtils(int x, int y, int movei, int sol[8][8], int xMove[8], int yMove[8])
{
    //cout<<"Adress of solution array in solveKTUtils is "<<&sol[][0]<<endl;
    int k, next_x, next_y;
    if (movei == 8 * 8)
    {
        return 1;
    }
    for (int i = 0; i < 8; i++)
    {
        next_x = x + xMove[i];
        next_y = y + yMove[i];
        if (isSafe(next_x, next_y, sol))
        {
            sol[next_x][next_y] = movei;
            if (solveKTUtils(next_x, next_y, movei + 1, sol, xMove, yMove))
            {
                return 1;
            }
            else
            {
                sol[next_x][next_y] = -1;
            }
        }
    }
    return 0;
}

void solveKnightProblem(int N)
{
    int sol[8][8];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sol[i][j] = -1; //initialize solution array
        }
    }

    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    sol[0][0] = 0; //starting position
    //cout<<"Adress of solution array in solveKnightProblem is "<<&sol[0][0]<<endl;

    if (solveKTUtils(0, 0, 1, sol, xMove, yMove) == 0)
    {
        cout << "Solution doesn't exist" << endl;
    }
    else
    {
        printSolution(sol);
    }
}
int main()
{
    int t;
    cin>>t;
    order=t;
    solveKnightProblem(order);
    return 0;
}
