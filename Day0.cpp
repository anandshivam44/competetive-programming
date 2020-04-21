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

int countFreq(int arr[], int n)
{
    map<int, int> mp;
    int result;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    int max = 0;
    for (auto x : mp)
    {
        if (x.second > max)
        {
            max = x.second;
            result = x.first;
        }
    }
    return result;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i]<<" ";
    //     // sum += arr[i];
    // }
    sort(arr, arr + n);
    double mean = (double)sum / n;
    int mode = countFreq(arr, n);
    double median;
    if (n % 2 == 0)
    {
        median = ((double)arr[(n / 2)] + (double)arr[(n / 2) - 1]) / 2.0;
    }
    else
    {
        median = arr[(int)(n / 2)];
    }
    printf("%.1f\n",mean);
    printf("%.1f\n",median);
    printf("%d\n",mode);

    return 0;
}
