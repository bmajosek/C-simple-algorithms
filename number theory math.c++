#include<bits/stdc++.h>
using namespace std;
long long l,r;
void solve()
{
	cin>>l>>r;
	long long sum=0,sum2=0;
	while(l)
	{
		sum+=l;
		l/=10;	
	}
	while(r)
	{
		sum2+=r;
		r/=10;	
	}
	cout<<sum2-sum<<endl;
	return ;
	
}
int main()
{
	ios_base::sync_with_stdio(0);
 	cin.tie(0);
 	cout.tie(0);
 	int t;cin>>t;
 	while(t--)
 	{
 		solve();
	}
	
	
}
