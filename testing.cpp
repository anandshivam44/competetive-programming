#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==5 && j==5)
            {
                break;
            }
            
            cout<<"  "<<i<<" "<<j<<"  ";
        }
        cout<<"\n";
    }

    return 0;
}
