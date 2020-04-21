#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)

void solve()
{
	int arr[] = {8, 6, 47, 9, 51, 2, 3, 6, 5, 47, 9, 5, 9, 6, 2, 1, 7, 8, 5, 6, 56, 5, 6, 6, 46, 4, 6, 46, 4, 64, 64, 9, 9, 9, 879};
	sort(all(arr));
	for (int i : arr)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	clock_t time_req;
	time_req = clock();
	cin.sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	time_req = clock() - time_req;
	cout << "Processor time " << (float)time_req / CLOCKS_PER_SEC
		 << " sec" << endl;
	return 0;
}