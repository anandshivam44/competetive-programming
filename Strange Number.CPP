#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#define DEBUG(x) cout << '>' << #x << ':' << x << "\n";
#define REP(i, n) for (int i = 0; i < (n); i++)


int primeFactors(int n)  
{  
    int count=0;
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";
        count++;  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            //cout << i << " ";
            count++;  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        count++;

    return count;  
}


int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int A, K;
        cin >> A >> K;
        int count;
        count=primeFactors(A);
        if (K <= count)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
