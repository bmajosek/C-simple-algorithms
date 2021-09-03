#include <bits/stdc++.h>
using namespace std;

long long il(long long r)
{
	long long l=0;
	long long y=r;
	for(long long x=0;x<r;x++)
	{
		while(x*x+y*y>r*r) y--;
		l+=y ;	
	}
	return 4*l+1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n;
	long long l=0,p=1000000;
	while(l<p)
	{
		m=(l+p)/2;
		long long march=il(m);
		if(march==n) break;
		if(march>n) p=m;
		else l=m+1;
	}
	if(il(m)<n) m++;
	cout<<m;
		
		
return 0;
}
