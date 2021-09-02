#include<bits/stdc++.h>
using namespace std;
int tab[500007];
int tab2[500007];
int dziel[500007][12];
void f(int x,int i)
{
	int k=0;
	for(int j=2;j*j<=x;j++)
	{
		if(x%j==0)
		{
			dziel[i][k]=j;
			k++;
		}
	}
	for(int j=0;j<k;j++)
	{
		if(__gcd(dziel[i][j]+x/dziel[i][j],x)==1)
			{
				tab[i]=dziel[i][j];tab2[i]=x/dziel[i][j];
				return;
			}
		for(int o=j+1;o<k;o++)
		{
			if(__gcd(dziel[i][j]+dziel[i][o],x)==1)
			{
				tab[i]=dziel[i][j];tab2[i]=dziel[i][o];
				return ;
			}
			if(__gcd(dziel[i][j]+x/dziel[i][j],x)==1)
			{
				tab[i]=dziel[i][j];tab2[i]=x/dziel[i][j];
				return;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	{
		int n;cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;cin>>x;
			f(x,i);
			
		}
		for(int i=0;i<n;i++)
		{
			if(tab[i]==0) cout<<-1<<" ";
			else cout<<tab[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			if(tab2[i]==0) cout<<-1<<" ";
			else cout<<tab2[i]<<" ";
		}
	}
	
	
	return 0;
}
