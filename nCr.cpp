#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    if (r > n)
        return 0;

    long long int factorial[r + 1];
    factorial[0] = 1;
    long long int MOD = 1000000007;
    long long int numerator = 1;
    long long int temp_n = n;
    for (int i = 1; i <= r; i++)
    {
        numerator *= temp_n--;
        factorial[i] = (factorial[i - 1] * i) % MOD;
        long long int d = __gcd(numerator, factorial[i]);
        numerator /= d;
        factorial[i] /= d;
    }

    return (int)(numerator / factorial[r]);
}

int main()
{
    cout << nCr(778, 116) << endl;
    return 0;
}