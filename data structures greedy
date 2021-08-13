#include<bits/stdc++.h>
using namespace std;
long long tab[100007];
long long suple[100007];
multiset<long long>secik;
int main()
{
	int n,k,a;cin>>n>>k;
	for(int i=0;i<n;i++) cin>>tab[i];
	cin>>a;
	long long sum=0;
	for(int i=0;i<n;i++) cin>>suple[i];
	for(int i=0;i<n;i++)
	{
		secik.insert(suple[i]);
		while(k<tab[i] && !secik.empty())
		{
			sum+=*secik.begin();
			secik.erase(secik.begin());
			k+=a;
		}
		if(k<tab[i] && secik.empty())
		{
			cout<<-1;return 0;
		}
	}
	cout<<sum;
}
