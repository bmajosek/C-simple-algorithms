#include<bits/stdc++.h>
using namespace std;
int tab[55];
int tab2[55];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;cin>>t;
	while(t)
	{
		t--;
		bool f=false;
		int a;cin>>a;
		int np=0,pod=0;
		for(int i=0;i<a;i++)
		{
			tab[i]=0;
		}
		for(int i=0;i<a;i++)
		{
			cin>>tab[i];
			if(tab[i]%2==0) pod++;
			if(tab[i]%2==1) np++;
		}
		if(pod%2==0 && np%2==0) 
		{
			cout<<"YES\n";
		}
		else {
			sort(tab,tab+a);
			for(int i=1;i<a;i++)
			{
				if(tab[i]-tab[i-1]==1) 
				{
					pod--;
					np--;
					tab[i]=-5;
					tab[i-1]=-5;
					if(pod%2==0 && np%2==0) 
					{
						break;
					}
				}
			}
			if(pod%2==0 && np%2==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	
	return 0;
}
