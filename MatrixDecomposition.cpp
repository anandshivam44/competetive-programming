#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;

#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

long long store[1000005];

#define MAX 10000000000
int multiply(int x, int res[], int res_size)
{

    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void power(int x, int n)
{

    if (n == 0)
    {
        cout << "1";
        return;
    }

    int res[MAX];
    int res_size = 0;
    int temp = x;

    while (temp != 0)
    {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }

    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);

    cout << x << "^" << n << " = ";
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    long long max = 1;
    cin >> t;
    while (t--)
    {
        long long order, a;
        cin >> order >> a;
        store[1] = a;
        long long power = 2, L_length = 3, result;

        if (order > max)
        {
            for (long long i = 2; i <= order; i++)
            {
                result = power * L_length;
                store[i] = result;
                cout << result << " \n";
                L_length += 2;
                power = result + power;
            }
            max = order;
        }

        //cout << result << endl;
        long long product = 1;
        if (order == 1)
        {
            product = a;
        }
        else
        {

            long long temp = store[order];

            for (int i = 1; i <= store[order]; i++)
            {
                product = product * a;
                product %= mod;
            }
        }

        cout << product << "\n";
    }

    return 0;
}
