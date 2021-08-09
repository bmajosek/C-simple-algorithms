#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	int a1=1,b1=1,c1=1,d1=1;
	int wyn1=0,wyn2=0,wyn3=0,wyn4=0;
	cin>>a>>b>>c>>d;
		if(d*a<=b*c) {
			wyn1=b*c-a*d;
			wyn2=c;
			int gc=__gcd(wyn1,wyn2*b);
			wyn1=wyn1/gc;
			wyn2=wyn2*b/gc;
			cout<<wyn1<<"/"<<wyn2;
		}
		else
		{
			wyn3=a*d-c*b;
			wyn4=d;
			int gc=__gcd(wyn3,wyn4*a);
			wyn3=wyn3/gc;
			wyn4=wyn4*a/gc;
			cout<<wyn3<<"/"<<wyn4;
		}
}
