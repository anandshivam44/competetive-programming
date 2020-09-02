#include <bits/stdc++.h>
#include <iostream>

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

ll c = 0;



void display(ll a[], ll n)
{
    ll mini = a[0];
    c++;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini)
        {
            c++;
        }
        mini = min(mini, a[i]);
    }
}
ll z=0;
void permute(ll a[], ll l, ll r)
{
    
    if (l == r)
    {
        display(a,l+1);
    }
    else
    {
        for (ll i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}

int result[1000] = {0};
int fact(int d) {
   if (d >= 0) {
      result[0] = 1;
      for (int i = 1; i <= d; ++i) {
         result[i] = i * result[i - 1];
      }
      return result[d];
   }
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    permute(arr, 0, n - 1);
    fact(10);
    cout<<c<<"   "<<z<<endl;
    cout << (double)(c) / z;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}