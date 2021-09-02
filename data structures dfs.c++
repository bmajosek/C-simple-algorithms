#include <bits/stdc++.h>
using namespace std; 
int plansza[1007][1007];
int odwiedzone[1007][1007];
int n,m,ile;
void czy(int a,int b)
{
	if(odwiedzone[a][b]==false)
	{
		ile++;
		bool flaga=true;
		odwiedzone[a][b]=true;
		if(a+1<m && plansza[a+1][b]==plansza[a][b] && odwiedzone[a+1][b]==false)
		{
		czy(a+1,b);
		}
		if(a-1>=0 && plansza[a-1][b]==plansza[a][b] && odwiedzone[a-1][b]==false)
		{
		czy(a-1,b);		
		}
		if(b+1<n && plansza[a][b+1]==plansza[a][b] && odwiedzone[a][b+1]==false)
		{
		czy(a,b+1);
		}
		if(b-1>=0 && plansza[a][b-1]==plansza[a][b] && odwiedzone[a][b-1]==false)
		{
		czy(a,b-1);
		}	
	}
	else return;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>plansza[i][j];
		}
	}
	int kol=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(odwiedzone[i][j]==0)
			{
				czy(i,j);
				if(ile>1) kol++;
				ile=0;	
			}
		}
	}
	cout<<kol<<endl;
return 0;
}
