#include <bits/stdc++.h>
using namespace std;
int tabwin[110];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n,m,winner,maks=0,d;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>d;
			if(d>maks)
			{
				maks=max(d,maks);
				winner=j;
			}
			}
//	cout<<winner<<" ";
		tabwin[winner]++;
		maks=0;
		
	}
	maks=0;
	for(int i=0;i<n;i++)
	{
		if(tabwin[i]>maks) winner=i;
	}
//	cout<<endl;
	cout<<winner;
return 0;
}
