#include<bits/stdc++.h>
using namespace std;
map <long long,long long> G;
long long tab[100007];
int main()
{
	int n;cin>>n;
	int naj=0;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		G[x]++;
		naj=max(naj,x);
	}
	tab[0]=0;
	tab[1]=G[1];
	for(int i=2;i<=naj;i++)
	{
		tab[i]=max(tab[i-1],tab[i-2]+G[i]*i);
	}
	cout<<tab[naj];
}
