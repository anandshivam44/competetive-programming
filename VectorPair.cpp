#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
bool sortbysec(const pair<pair<int, int>, int> &a,
               const pair<pair<int, int>, int> &b)
{ //driver function to sort pair by second item
    return (a.first.second < b.first.second);
}
//THIS PROGRAM IS AMAZING
int main()
{
    vector<pair<int, int>> myPair;
    int arr[] = {8, 1, 9, 5, 3, 2, 4, 6, 7};
    int arr_1[] = {3, 7, 9, 1, 4, 6, 8, 2, 5};
    int arr_2[] = {1, 2, 3, 6, 9, 8, 7, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<pair<pair<int, int>, int>> mmyPair;

    for (int i = 0; i < n; i++)
    {
        mmyPair.emplace_back(make_pair(arr[i], arr_1[i]), arr_2[i]);
    }
    sort(mmyPair.begin(), mmyPair.end(),sortbysec);
    for (int i = 0; i < n; i++)
    {
        printf("%2d %2d %2d\n", mmyPair[i].first.first, mmyPair[i].first.second,mmyPair[i].second);
    }

    return 0;
}
