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
int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    unsigned long long int modulo = 1000000007;
    while (t--)
    {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        sort(p, p + n, greater<int>());
        unsigned long long int sum = 0;
        for (auto i = 0; i < n; i++)
        {
            p[i] = p[i] - (unsigned long long int)i;
            if (p[i] < 0)
            {
                p[i] = 0;
            }

            sum += p[i];
            sum %= modulo;
            //cout << "p " << i << "   sum " << sum << "\n";
        }
        cout << sum << "\n";
    }

    return 0;
}
