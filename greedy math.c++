#include <bits/stdc++.h>
using namespace std;
int mozna[1000007];
int nominaly[1000007];
int ile[1000007];
int kwota,m,n;
bool prob(int x)
{
	if(x%2==1) return 0;
	mozna[0]=1;
	m=0;
	for(int i=0;i<n;i++)
	{	
			for(int biez=m;biez>=0;biez--)
		{
			if(mozna[biez])	{	
			kwota=biez;
			for(int j=0;j<ile[i];j++)
		{
			kwota+=nominaly[i];
			if(x/2==kwota) return 1;
			if(x/2<kwota) break;
			m=max(kwota,m);
			mozna[kwota]=1;
		}
		}
		}
		
		
	}
	return 0;
	
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int sum=0;cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>nominaly[i]>>ile[i];
		sum+=ile[i]*nominaly[i];		
	}
	cout<<sum<<endl;
	if(prob(sum)) cout<<"TAK"<<endl;
	else cout<<"NIE"<<endl;
	
	
	
		
		
return 0;
}
