#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;

#include <algorithm>
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
    int input[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input[i][j];
        }
    }
    int arr[3][3] = {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}};

    return 0;
}
