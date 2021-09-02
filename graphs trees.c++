#include<bits/stdc++.h>
using namespace std;

	
	

int main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int h,q,sum=0;cin>>h>>q;
	int lw=1;
	lw=1<<h;
	lw=lw-1;
	bool tab[lw+7];
	for(int i=0;i<lw+7;i++) tab[i]=false;
	for(int i=0;i<q;i++)
	{
		int a;cin>>a;
		tab[a]=1;
	}
	

	for(int i=1;i<=lw;i++)
	{
		if(tab[i]==0 && tab[i/2]==0)
		{
			sum++;
		}
		if(tab[i]==1 && i<=lw/2) 
		{
			tab[i*2]=1;
			tab[i*2+1]=1;
		}
	}
	cout<<sum<<"\n";
	
return 0;
}
//0010111111110
