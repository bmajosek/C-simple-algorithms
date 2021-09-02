#include<bits/stdc++.h>
using namespace std;
vector<int> G[100007];
bool tab[100007];
int n,m;
int wyn=0;
void dfs(int wierz,int a, int ile)
{
	if(tab[wierz]) ile++;
	else ile=0;
	if(ile>m) return;
	if(G[wierz].size()==1 && wierz!=1)
	{
		wyn++;	
		return;
	}
		for(int i=0;i<G[wierz].size();i++)
		{
			if(G[wierz][i]!=a) dfs(G[wierz][i],wierz,ile);
		}
	
	
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		bool x;cin>>x;
		tab[i]=x;
	}
	for(int i=0;i<n-1;i++)
	{
		int a,b;cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs(1,0,0);
	cout<<wyn;
	
}
