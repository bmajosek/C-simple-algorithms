#include<bits/stdc++.h>
using namespace std;
	long long tab[10000007];
	
 
int main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long sum=0,a,b,c,d;
	cin>>a>>b>>c>>d;
	tab[a+b]++;
	tab[b+b+1]--;
	tab[a+c+1]--;
	tab[b+c+2]++;
	for(int j=0;j<=1;j++)
	for(int i=1;i<10000002;i++)
	{
		tab[i]+=tab[i-1];
	}
	for(long long i=c+1;i<10000002;i++)
	{
		sum+=tab[i]*(min(i,d+1)-c);
	}
	cout<<sum;
		
		
return 0;
}
