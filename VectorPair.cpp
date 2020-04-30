#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
bool sortbysec(const pair<pair<int, int>, int> &a,
               const pair<pair<int, int>, int> &b)
{ //driver function to sort pair by second item
    return (a.first.first < b.first.first);
}
static bool comparator(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b)
{
    if (a.first.first < b.first.first || (!(b.first.first < a.first.first) && (a.first.second < b.first.second)))
        return 1;
    else
        return 0;
}
//THIS PROGRAM IS AMAZING
int main()
{
    vector<pair<int, int>> myPair;
    int arr[] = {8, 8, 8, 8, 5, 5, 5, 5, 5, 7, 7};
    int arr_1[] = {3, 7, 9, 1, 4, 6, 8, 2, 1, 9};
    int arr_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<pair<pair<int, int>, int>> mmyPair;

    for (int i = 0; i < n; i++)
    {
        mmyPair.emplace_back(make_pair(arr[i], arr_1[i]), arr_2[i]);
    }
    sort(mmyPair.begin(), mmyPair.end(), comparator);
    for (int i = 0; i < n; i++)
    {
        printf("%2d %2d %2d\n", mmyPair[i].first.first, mmyPair[i].first.second, mmyPair[i].second);
    }

    return 0;
}
