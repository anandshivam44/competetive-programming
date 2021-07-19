#include <bits/stdc++.h>
using namespace std;

map<long long, long long> l, r;

int main()
{
    long long n, k, ans = 0;
    scanf("%lld%lld", &n, &k);
    long long a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < n; i++)
        r[a[i]]++;
    for (int i = 0; i < n; i++)
    {
        r[a[i]]--;
        if (a[i] % k == 0)
        {
            ans += l[a[i] / k] * r[a[i] * k];
        }
        l[a[i]]++;
    }
    printf("%lld\n", ans);
    return 0;
}