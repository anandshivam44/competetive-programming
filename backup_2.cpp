#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int A = 0, B = 1;
int N;

bool containsBreakPoint()
{
}
string checkPossible(int person, int start[], int end[], int index, string chain)
{
    if (index == N - 1)
    {
        // if (person == A)
        // {
        //     chain = chain + 'A';
        // }
        // else if (person == B)
        // {
        //     chain = chain + 'B';
        // }
        // cout << "if executed going to return chain " << chain << "\n";

        return chain;
    }

    string k;
    cout << index << "  index\n";
    cout << start[index + 1] << " <= " << end[index] << "  " << (start[index + 1] <= end[index]) << "  B \n";
    cout << end[index] << " <= " << start[index + 1] << " " << (end[index] <= start[index + 1]) << "  A \n";
    if (start[index + 1] <= end[index])
    {

        if (index % 2 == 1)
        {
            cout << "B executed\n";
            chain = chain + 'B';
            index++;
            k = checkPossible(B, start, end, index, chain);
        }
        else
        {
            cout << "A executed\n";
            chain = chain + 'A';
            index++;
            k = checkPossible(A, start, end, index, chain);
        }
    }
    else if (end[index] <= start[index + 1])
    {
        if (index % 2 == 0)
        {
            cout << "A executed\n";
            chain = chain + 'A';
            index++;
            k = checkPossible(A, start, end, index, chain);
        }
        else
        {
            cout << "B executed\n";
            chain = chain + 'B';
            index++;
            k = checkPossible(B, start, end, index, chain);
        }
    }
    else
    {
        cout << "else executed\n";
    }

    return k;
}
int main()
{

    cin >> N;
    int start[N];
    int end[N];
    int chain[N] = {-1};

    for (int i = 0; i < N; i++)
    {
        cin >> start[i];
        cin >> end[i];
    }

    string c = "A -- "+checkPossible(A, start, end, 1, "");
    string d = "B -- "+checkPossible(B, start, end, 1, "");
    cout << c << "   -+-   " << d;
    return 0;
}
