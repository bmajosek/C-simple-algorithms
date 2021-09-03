#include<bits/stdc++.h>

using namespace std;
int tab[27];
int tab2[27];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie();
	string s,g,s1,g1;cin>>s>>g>>s1>>g1;
	int licznik=0;
	for(int i=0;i<max(s.length(),s1.length());i++)
	{
		if(s1[i]>='A' && s1[i]<='Z' && s[i]>='A' && s[i]<='Z')
		{
			if(s1[i]-s[i]>=0) licznik+=s1[i]-s[i];
			else licznik+='Z'+2-s[i]+s1[i]-'A';
			
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			licznik+='Z'-s[i]+1;
		}
		else if(s1[i]>='A' && s1[i]<='Z')
		{
			licznik+=s1[i]-'A'+1;
		}
//		cout<<licznik<<endl;
	}
	for(int i=0;i<5;i++)
	{
		if(g[i]>='0' && g[i]<='9')
		{
			if(g[i]<=g1[i]) licznik+=g1[i]-g[i];
			else
			{
				licznik+='9'-g[i]+1+g1[i]-'0';
			}
		}
//		cout<<licznik<<endl;
	}
	cout<<licznik;
	
return 0;
}
