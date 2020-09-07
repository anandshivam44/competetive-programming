#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());

int calculateNimSum(vector<int> piles)
{
    int n = piles.size();
    int i, nimsum = piles[0];
    for (i = 1; i < n; i++)
        nimsum = nimsum ^ piles[i];
    return (nimsum);
}

void solve()
{
    vector<int> v({1,2,3,4,5,6,7,8,9,5,5});
    // v.push_back(1);
    // v.push_back(1);
    cout << "XOR Sum = " << calculateNimSum(v) << endl;
}

int main()
{
    solve();
}