#include<bits/stdc++.h>
using namespace std;
int tab[1007];
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		sort(tab,tab+n);
		reverse(tab,tab+n)
		for(int i=0;i<n;i++)
		{
			cout<<tab[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
