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
        int a, b, n, mod;
        int c;
        cin >> a >> b >> n >> mod;
        long long arr[mod+1];
        int series[n];
        for (auto i = 0; i < mod; i++)
        {
            arr[i] = 0;
        }

        arr[a]++;
        arr[b]++;
        series[0] = a;
        series[1] = b;
        for (auto i = 2; i < n; i++)
        {
            c = (a + b) % mod;
            arr[c] = arr[c] + 1;
            a = b;
            b = c;
        }
        long long sum = 0;
        for (auto i = 0; i < mod; i++)
        {
            sum += (long long)(arr[i] * arr[i]);
        }
        cout << sum << "\n";
    }
    return 0;
}
