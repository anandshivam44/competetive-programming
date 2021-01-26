#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{0, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9};
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
	cout << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;
	cout << binary_search(v.begin(), v.end(), 5) << endl;
	cout << binary_search(v.begin(), v.end(), 10) << endl;

	// cout << a << endl;

	return 0;
}