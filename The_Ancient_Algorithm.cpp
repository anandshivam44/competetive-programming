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
        long long int L[n];
        for (auto i = 0; i < n; i++)
        {
            cin >> L[i];
        }
        long long int A, B, C;
        // for (auto i = 0; i < n; i++)
        // {
        //     cout << L[i] << " ";
        // }
        cin >> A;
        cin >> B;
        cin >> C;

        A = A % C;
        B = B % C;
        string s;
        cin >> s;
        for (auto j = 0; j < n; j++)
        {
            L[j] %= C;
        }
        for (auto i = 0; i < n; i++)
        {
            char c = s.at(i);
            if (c == 'R')
            {
                reverse(L + i, L + n);
            }
            else if (c == 'A')
            {
                for (auto j = i; j < n; j++)
                {
                    L[j] += A;
                    L[j] %= C;
                }
            }
            else if (c == 'M')
            {
                for (auto j = i; j < n; j++)
                {
                    L[j] *= B;
                    L[j] %= C;
                }
            }
        }
        for (auto i = 0; i < n; i++)
        {
            cout << L[i] << " ";
        }
        cout<<"\n";
    }

    return 0;
}
