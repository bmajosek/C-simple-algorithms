#include <bits/stdc++.h>
using namespace std;
long long tab[2000007];
int main() {
	ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
	long long mod=1e9+7;
	tab[1]=0;
	tab[2]=0;
	tab[3]=4;
	tab[4]=4;
	
	int t;cin>>t;
	for(int i=5;i<2000007;i++)
		{
			tab[i]=(tab[i-1]+2LL*tab[i-2])%mod;
			if(i%3==0) tab[i]=(tab[i]+4LL)%mod;
		}
	while(t)
	{
		t--;
		int n;cin>>n;
		cout<<tab[n]<<"\n";
	}
	
	return 0;
}
