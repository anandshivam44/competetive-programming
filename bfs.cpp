#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

void BFS(vector<int> v[])
{
	queue<int> q;
	bool b[8];
	fill(b, b + 8, false);
	q.push(0);
	b[0] = true;
	while (!q.empty())
	{
		int p = q.front();
		cout << p << " ";
		q.pop();
		for (int i = 0; i < v[p].size(); ++i)
		{
			if (b[v[p][i] == false])
			{
				q.push(v[p][i]);
				b[v[p][i]] = true;
			}
		}
	}
}

using namespace std;
int main()
{
	vector<int> v[8];
	v[0].push_back(1);
	// v[1].push_back(0);

	v[0].push_back(2);
	//v[2].push_back(0);

	v[1].push_back(3);
	//v[3].push_back(1);

	v[1].push_back(4);
	//v[4].push_back(1);

	v[1].push_back(5);
	//v[5].push_back(1);

	v[2].push_back(6);
	//v[6].push_back(2);

	v[6].push_back(7);
	//v[7].push_back(6);

	BFS(v);
	return 0;
}