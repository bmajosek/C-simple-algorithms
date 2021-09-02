#include<bits/stdc++.h>
using namespace std;
int tab[200007];
int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>tab[i];
	int p=0,k=1;
	int maks=0;
	while(k<n)
	{
		if(tab[k]<=tab[k-1]*2) k++;
		else{
			maks=max(maks,k-p);
			p=k;
			k++;
		}
	}
	maks=max(maks,k-p);
	cout<<maks;
}
