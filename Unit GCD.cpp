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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool b[n];
        int start_pointer = 2;

        int c = 0;
        vector<int> container;
        container.push_back(2);
        for (int i = 3; i <= n; i++)
        {

            for (int j = 0; j < container.size(); j++)
            {
                if (gcd(i, container[j]) == 1)
                {
                    container.push_back(i);
                }
            }
        }
        for (int j = 0; j < container.size(); j++)
        {
            cout<<container[j]<<" ";
        }
    }

    return 0;
}
