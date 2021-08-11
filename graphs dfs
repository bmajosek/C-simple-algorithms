#include<bits/stdc++.h>
using namespace std;
 
vector<int>G[1300];
int odwiedzone[1300];
int kolory[1300];
int sumy_kolorow[1300];
void dfs(int index,int color)
{
	odwiedzone[index]=1;
	kolory[index]=color;
//	cout<<"wierzcholek nr: "<<index<<" odwiedzony"<<endl;
	for(int i=0;i<G[index].size();i++)
	{
		if(odwiedzone[G[index][i]]==0)
			dfs(G[index][i],color);
	}
}
int main()
{
	long long sum=1;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	int akt_kolor=1;
	for(int i=1;i<=n;i++)
	{
		if(odwiedzone[i]==0)
		{
			dfs(i,akt_kolor);
			akt_kolor++;
		}
	}
	for(int j=1;j<=akt_kolor;j++)
	{
	for(int i=1;i<=n;i++)
	{
	if(kolory[i]==j)sumy_kolorow[j]++;		
	}
	}
	if(m==0) {
		cout<<1;
		return 0;
	}
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	sum=1;
	for(int i=1;i<=akt_kolor;i++)
	{
		for(int j=1;j<sumy_kolorow[i];j++)
			sum*=2;
	}
	cout<<sum<<endl;
 
	
	
	return 0;
}
