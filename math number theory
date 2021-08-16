#include<bits/stdc++.h>
using namespace std;
int czyp(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return i;
	}
	return 1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int k=czyp(n);
		if(k==1) cout<<1<<" "<<n-1<<"\n";
		else{
			cout<<n/k<<" "<<n-n/k<<"\n";
		}
	}
	return 0;
}
