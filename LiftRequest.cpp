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
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[q * 2];
        for (int i = 0; i < q * 2; i++)
        {
            cin >> arr[i];
        }
        int pointer = 0;
        long long sum = 0;
        for (int i = 0; i < q * 2; i++)
        {
            sum=sum+abs(arr[i]-pointer);
            pointer=arr[i];
        }
        cout<<sum<<"\n";
    }

    return 0;
}
