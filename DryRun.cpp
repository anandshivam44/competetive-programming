#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(arr)                               \
	loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
	cout << "\n"
#define print_vector(vvv)                               \
	loop(z, vvv.size()) cout << vvv[z] << " "; \
	cout << "\n"
#define print_vector_pair(vvv)                               \
	loop(z, vvv.size()) cout << vvv[z].first << " "vvv[z].second<<"\n"; \
	cout << "\n"
#define fill_my(arr,q) fill(all(arr),q)

void solve()
{
	int arr[] = {8, 6, 47, 9, 51, 2, 3, 6, 5, 47,33};
	vector<pair<int,int>> v;
	int w = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		v.emplace_back(arr[i],arr[i+1]);
	}

	//fill_my(arr,5);
	//print_vector_pair(v);
	for (int i = 0; i < w; i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<"\n";
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