#include <bits/stdc++.h>
using namespace std;
int pref[2007][2007];
int tab[2007][2007];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char a;
			cin>>a;
			if(a=='#') tab[j][i]=1;
			else tab[j][i]=0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			pref[j][i]=tab[j][i]+pref[j-1][i]+pref[j][i-1]-pref[j-1][i-1];
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout<<pref[j][i]<<" ";
//		}
//		cout<<endl;
//	}
	while(q)
	{
		q--;
	int xg,yg,xd,yd;
	cin>>xg>>yg>>xd>>yd;
	if(pref[xd][yd]-pref[xg-1][yd]-pref[xd][yg-1]+pref[xg-1][yg-1]==0) cout<<"TAK\n";
	else cout<<"NIE\n";
	}
//	while(q)
//	{
//		f=false;
//		q--;
//	
//		cin>>xg>>yg>>xd>>yd;
//		for(int i=yg;i<=yd;i++)
//		{
//			if(pref[i][xg]!=pref[i][xd])
//			{
//				cout<<"NIE\n";
//				f=true;
//				break;
//			}
//			if(xg-1>0 && pref[i][xg-1]!=pref[i][xg])
//			{
//				cout<<"NIE\n";
//				f=true;
//				break;
//			}
//			if(xg-1==0 && pref[i][xg]>0)
//			{
//				cout<<"NIE\n";
//				f=true;
//				break;
//			}
//			
//		
//		}
//		if(f==false)cout<<"TAK\n";
//		
//	}
	
	
	
	
	
	
return 0;
}
//0010111111110
