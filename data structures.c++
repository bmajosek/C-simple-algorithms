#include<bits/stdc++.h>
using namespace std;
string tab[1507];
bool czyset(string a,string b,string c)
{
	for(short i=0;i<a.length();i++)
	{
		if(a[i]!=b[i] && a[i]==c[i]) return false;
		if(a[i]==b[i] && a[i]!=c[i]) return false;
		if(b[i]==c[i] && b[i]!=a[i]) return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short n,k;cin>>n>>k;
	for(short i=0;i<n;i++)
	{
		cin>>tab[i];
	}
	short suma=0;
	for(short i=0;i<n;i++)
	{
		for(short j=i+1;j<n;j++)
		{
			for(short z=j+1;z<n;z++)
			{
				if(czyset(tab[i],tab[j],tab[z])) suma++;
			}
		}
	}
	cout<<suma;

	
	return 0;
}
