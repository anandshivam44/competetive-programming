#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<pair<int,int>> q;
    map<long, long> m;
    map<long, long> val;
    for (int i = 0; i < n; i++)
    {
        long a, b;
        cin >> a >> b;
        // q.emplace_back(a,b);
        if (a == 1)
        {
            map<long, long>::iterator it;
            it = m.find(m[b]);
            if (it != m.end())
                val[m[b]] -= 1;

            m[b] += 1;
            val[m[b]] += 1;
        }
        else if (a == 2)
        {
            map<long, long>::iterator it;
            it = m.find(m[b]);

            if (it != m.end())
                val[m[b]] -= 1;
            m[b] -= 1;
            val[m[b]] += 1;
        }
        else if (a == 3)
        {
            bool flag = false;

            if (val[b] > 0)
            {
                flag = true;
            }

            if (flag)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}
