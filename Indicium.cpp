#include <iostream>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    int c = 1;
    for (int b=0;b<t;b++)
    {
        int n;
        cin >> n;
        int factorial = 1;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            a[n] = i;
            factorial *= i;
        }
        cout<<factorial<<"  factorial";
        int combination[factorial][n];
        for (int i = 0; i < factorial; i++)
        {
            for (int j = 0; j < n; j++)
            {
                combination[i][j] = (((i+j)%n)+1);
                cout<<combination[i][j]<<" ";
            }
        }
        
        for (int i = 0; i < factorial; i++)
        {
            for (int j  = 0; j < n; j++)
            {
                cout<<combination[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    }

    cout << "Case #" << c << "\n";
    return 0;
}
