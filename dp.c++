#include<bits/stdc++.h>
using namespace std;
int tab[100007];
int tab2[100007];
int pref[100007];
int pref2[100007];
int pref3[100007];
int pref4[100007];
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int m;cin>>m;
		int sum=0,sum2=0;
		for(int i=0;i<m+10;i++)
		{
			pref[i]=0;
			pref2[i]=0;
			pref3[i]=0;
			pref4[i]=0;
		}
		for(int i=0;i<m;i++)
		{
			cin>>tab[i];
			sum+=tab[i];
			if(i>0)
			pref3[i]=pref3[i-1]+tab[i];
			else pref3[0]=tab[0];
		}

		for(int i=0;i<m;i++)
		{
			cin>>tab2[i];
			sum2+=tab2[i];
			if(i>0)
			pref4[i]=pref4[i-1]+tab2[i];
			else pref4[0]=tab2[0];
		}
		pref[0]=sum;
		pref2[0]=sum2;
		for(int i=1;i<m;i++)
		{
			pref[i]=pref[i-1]-tab[i-1];
			pref2[i]=pref2[i-1]-tab2[i-1];
		}
//		for(int i=0;i<m;i++)
//		{
//			cout<<pref[i]<<" ";
//		}
//		cout<<endl;
//		for(int i=0;i<m;i++)
//		{
//			cout<<pref4[i]<<" ";
//		}
//		cout<<endl;
//				for(int i=0;i<m;i++)
//		{
//			cout<<pref2[i]<<" ";
//		}
//		cout<<endl;
//		for(int i=0;i<m;i++)
//		{
//			cout<<pref3[i]<<" ";
//		}
		int maks=0,mini=INT_MAX;
		for(int i=0;i<m;i++)
		{
		maks=max(pref[i+1],pref4[i-1]);
		mini=min(mini,maks);
		}
		if(m==1) cout<<0<<"\n";
		else cout<<mini<<"\n";
	}

}
