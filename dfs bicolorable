#include<bits/stdc++.h>
using namespace std;
vector<int> G[100007];
int odw[100007];
int n,m;
void dfs(int u,int kol)
{
	if(odw[u]==0)
	{
		odw[u]=kol;
	}
	for(int i=0;i<G[u].size();i++)
	{
		if(odw[G[u][i]]==0)
		{
			odw[G[u][i]]=3-kol;
			dfs(G[u][i],3-kol);
		}
	}
	return;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs(0,1);
	for(int i=0;i<n;i++) 
	{
		for(int j=1;j<G[i].size();j++)
		{
			if(odw[i]==odw[j]) 
			{
				cout<<"NOT BICOLORABLE";
				return 0;
			}
		}
	}
	cout<<"BICOLORABLE";

	return 0;
}
