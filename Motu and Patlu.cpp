#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long motu_pointer = 0, patlu_pointer = n - 1, motu_consumed = 0, patlu_consumed = 0, motu = 0, patlu = 0, f = 0;
        while (motu_pointer <= patlu_pointer)
        {
            if (motu_consumed <= 2 * patlu_consumed)
            {
                motu_consumed += arr[motu_pointer];
                motu += 1;
                motu_pointer++;
            }
            else
            {
                patlu_consumed += arr[patlu_pointer];
                patlu += 1;
                patlu_pointer--;
            }
        }
        cout << motu << " " << patlu << "\n";
        if (motu > patlu)
            cout << "Motu"
                 << "\n";
        else if (motu < patlu)
            cout << "Patlu"
                 << "\n";
        else
            cout << "Tie"
                 << "\n";
    }

    return 0;
}
