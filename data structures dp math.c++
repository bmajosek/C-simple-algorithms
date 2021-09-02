#include<bits/stdc++.h>
using namespace std;
vector<int>G[100007];
vector<int>rozn[100007];
int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		G[0].push_back(a);
	}
	for(int j=0;;j++)
	{
		for(int i=1;i<G[j].size()-1;i++)
		{
			int x=max(max(G[j][i]-G[j][i+1],G[j][i]-G[j][i-1]),1);
			rozn[j].push_back(x);
		}
		for(int i=0;i<rozn[j].size();i++)
		{
			G[j+1].push_back(G[j][i+1]-rozn[j][i]);
		}
		bool flaga=false;
		for(int i=0;i<rozn[j].size();i++)
		{
			if(G[j+1][i]>0) flaga=true;
		}
		if(!flaga) 
		{
			cout<<j+1;
			return 0;
		}
	}
}

