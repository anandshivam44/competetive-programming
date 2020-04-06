#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <functional>
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == 1)
            {
                //cout << "index " << j << "\n";
                v.push_back(j);
            }
        }
        bool b = true;
        //cout<<"Size "<<v.size()<<"\n";
        for (int i = 0; i < v.size() - 1; i++)
        {
            if ((v[i + 1] - v[i]) < 6)
            {
                b = false;
            }
        }
        if (b)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}
