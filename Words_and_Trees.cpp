#include<bits/stdc++.h>
using namespace std;
char val[100005];
bool vis[100005];
int n,q,subtree[100005][26];
vector<int>v[100005];
void dfs(int u)
{
	vis[u]=1;
	for(auto c:v[u])
	{
		if(vis[c])continue;
		dfs(c);
		for(int i=0;i<26;i++)
			subtree[u][i]+=subtree[c][i];
	}
	subtree[u][val[u]-'a']++;
}
int main()
{
	cin>>n;
	cin>>q;
	for(int i=1;i<=n;i++)
		cin>>val[i];
	for(int i=1;i<=n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
	while(q--)
	{
		int node;
		string s;
		cin>>node;
		cin>>s;
		int f[30]={0};int ans=0;
		for(int i=0;i<s.size();i++)
			f[s[i]-'a']++;
		for(int i=0;i<=25;i++)
		{
			ans+=max(0,f[i]-subtree[node][i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}