#include<bits/stdc++.h>
using namespace std;
int tab[1007];
int main()
{
	int n,k;cin>>n>>k;
	int c;cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>tab[i];
	}
	int ile=0;
	if(tab[0]%k==0 && tab[0]/k-1>=0)
	{
		ile=tab[0]/k-1;
	}
	else ile=tab[0]/k;
	for(int i=1;i<c;i++)
	{
		if((tab[i]-tab[i-1])%k==0)
		ile+=(tab[i]-tab[i-1])/k-1;
		else
		ile+=(tab[i]-tab[i-1])/k;
	}
	ile+=(n-tab[c-1])/k;
	
	cout<<ile+c;
	return 0;
}
