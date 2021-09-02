#include<bits/stdc++.h>
using namespace std;
vector<int> G[100007];
int odw[100007];
int odw2[100007];
queue<int>kol;
void bfs(int u,int tab[])
{
	kol.push(u);
	tab[u]=1;
	while(!kol.empty())
	{
		u=kol.front();
		kol.pop();
		for(int i=0;i<G[u].size();i++)
		{
			if(!tab[G[u][i]]) 
			{
				kol.push(G[u][i]);
				tab[G[u][i]]=tab[u]+1;
			} 
			
		}
	}
	return;
}
int n,m;
int a,b,c;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int a,b;cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	cin>>a>>b>>c;
	bfs(a,odw);
	bfs(c,odw2);
	if(odw[b]<odw[c]+odw2[b]-1)
	{
		cout<<"NO";
	}
	else cout<<"YES";
	return 0;
}
