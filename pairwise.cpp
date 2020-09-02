#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(arr)                                         \
    loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)


ll MaxPairwiseProduct(vector<ll> numbers)
{
    ll max_product = 0;
    ll n = numbers.size();
    ll max1 = numbers[0];
    ll index1 = 0;
    

    for (ll first = 0; first < n; ++first)
    {
        if (numbers[first] > max1)
        {
            max1 = numbers[first];
            index1 = first;
        }
    }
    numbers.erase(numbers.begin() + index1);
    ll index2 = 0;
    ll max2 = numbers[0];
    for (ll first = 0; first < numbers.size(); ++first)
    {
        if (numbers[first] > max2)
        {
            max2 = numbers[first];
            index2 = first;
        }
    }
    max_product=max1*max2;

    return max_product;
}

int main()
{
    int n;
    std::cin >> n;
    vector<ll> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers)
    << "\n";
    return 0;
}
