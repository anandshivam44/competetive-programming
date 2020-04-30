#include <bits/stdc++.h>
using namespace std;

bool iskaprekar(long long n)
{
    if (n == 1)
        return true;
    long long sq_n = n * n;
    long long sq=sq_n;
    long long count_digits = 0;
    long long dig = 0;

    long long temp = n;
    while (temp)
    {
        dig++;
        temp /= 10;
    }
    // cout << "digits = " << dig << endl;
    while (sq_n)
    {
        count_digits++;
        sq_n /= 10;
    }

    long long eq_parts = pow(10, dig);
    // cout << " eq = " << eq_parts <<" sq "<<sq_n<< endl;
    if (eq_parts == n)
    {
        // cout << "return false " << n << endl;
        return false;
    }
    long long sum = sq / eq_parts + sq % eq_parts;
    // cout << sq / eq_parts << " + " << sq % eq_parts << "=" << (sq / eq_parts + sq % eq_parts) << endl;
    if (sum == n)
        return true;

    return false;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    bool bo = false;
    for (long long i = a; i <= b; i++)
    {
        if (iskaprekar(i))
        {
            cout << i << " ";
            bo = bo || true;
        }
    }
    if (bo == false)
    {
        cout << "INVALID RANGE";
    }

    return 0;
}
