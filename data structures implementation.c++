#include <bits/stdc++.h>
using namespace std;
int tab[27];
int tab2[27];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
		string s,s1;cin>>s>>s1;
		int k=-1,o=-1;
		int sum=0;
		bool f=false;
		for(int i=0;i<s.length();i+=2)
		{
			for(int j=0;j<s1.length();j+=2)
			{
				if(s[i]==s1[j]) 
				{
					f=true;
					k=i;
					o=j;
					break;
				}
				
			}
			if(f) break;
		}
		if(k==-1 && o==-1)
		{
		
			for(int i=0;i<s.length();i++)
			{
				if(s[i]>='A' && s[i]<='Z')
				{
					sum+=int(s[i+1])-'0';
				}
			}
			for(int i=0;i<s1.length();i++)
			{
				if(s1[i]>='A' && s1[i]<='Z')
				{
					sum+=int(s1[i+1])-'0';
				}
			}
		}
		else
		{
			for(int i=0;i<k;i++)
			{
				if(s[i]>='A' && s[i]<='Z')
				{
					sum+=int(s[i+1])-'0';
				}
			}
			for(int i=0;i<o;i++)
			{
				if(s1[i]>='A' && s1[i]<='Z')
				{
					sum+=int(s1[i+1])-'0';
				}
			}
		}
		cout<<sum;
		
	
return 0;
}
