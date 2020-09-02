#include <bits/stdc++.h> //Standard Template Library STL 
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int arr[2][4 * n - 1];
        int missing_x, missing_y;
        map<int, int> map_x;
        map<int, int> map_y;

        for (int i = 0; i < 4 * n - 1; i++) //read input 
        {
            cin >> arr[0][i];
            cin >> arr[1][i];
            map_x[arr[0][i]]++;
            map_y[arr[1][i]]++;
        }

        for (auto x : map_x)
        {
            if (x.second % 2 == 1)
            {
                missing_x = x.first;
            }
        }
        for (auto x : map_y)
        {
            if (x.second % 2 == 1)
            {
                missing_y = x.first;
            }
        }

        cout << missing_x << " " << missing_y << endl;
    }
    return 0;
}