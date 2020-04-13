#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permute(string s, int low, int high)
{
    if (low==high)
    {
        cout<<s<<endl;
    }
    
    for (int i = low; i <=high; i++)
    {
        swap(s[low],s[i]);
        permute(s,low+1,high);
        swap(s[low],s[i]);
    }
    
}

int main()
{
    string s = "ABC";
    permute(s, 0, s.length()-1);
    return 0;
}
