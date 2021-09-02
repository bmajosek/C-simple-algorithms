#include<bits/stdc++.h>
using namespace std;

	vector<int> w[1000007];
	bool odwiedzony[1000007];
	int kolory[1000007];
	int n,l,kol=1;
	bool czy=1;
	void dfs(int u,int kolor)
{
	odwiedzony[u]=1;
	kolory[u]=kolor;
	for(int i=0;i<w[u].size();i++)
	{
		if(!odwiedzony[w[u][i]])
		{
			dfs(w[u][i],kolor);
		}
	}
}
int main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,l;
	cin>>n>>l;
	for(int i=0;i<l;i++)
	{
		int a,b;cin>>a>>b;
		w[a].push_back(b);
		w[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		if(!odwiedzony[i])
		{
			dfs(i,kol);
			kol++;
		}
	
	}
	int q;
	cin>>q;
	while(q--)
	{
		int w,e;
		cin>>w>>e;
		if(kolory[w]==kolory[e])
		{
			cout<<"TAK\n";
		}
		else cout<<"NIE\n";
	}
return 0;
}
