#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;cin>>t;
	while(t)
	{
		t--;
		int n;
		long long l,r,a=1,b=2;
		cin>>n>>l>>r;
		while(r>=l)
		{
			while(n!=a && (l>(n-a)*b))
			{
				l-=(n-a)*b;
				r-=(n-a)*b;
				a++;
//				cout<<"a :"<<a<<endl;
//				cout<<"l :"<<l<<endl;
//				cout<<"r :"<<r<<endl;
			}
			if(a==n)
			{
				cout<<1<<" ";
				break;
			}
			if(l%2)
			{
				cout<<a<<" ";
			}
			if(!(l%2))			
			{
				cout<<l/2+a<<" ";
			}
			l++;
//				cout<<"l :"<<l<<endl;
			
		}
		cout<<endl;
		
		
	}
return 0;
}
