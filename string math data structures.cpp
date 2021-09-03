#include <bits/stdc++.h>
using namespace std;
 
string tab[10007];
 
int main()
{
	ios_base::sync_with_stdio(0);
    int n;string s;
    cin>>s;cin>>n;string abc;
    if(s=="szyfruj")
    {
    	getline(cin,abc);
    	getline(cin,s);
    	int k=0;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]!=' ')
    		{
    			tab[k]=tab[k]+s[i];
			}
			else
			{
				k++;
			}
		}
		for(int i=0;i<=k;i++)
		{
			for(int j=0;j<tab[i].length();j++)
			if(tab[i][j]>='A' && tab[i][j]<='Z')
			{
				tab[i][j]=(tab[i][j]-'A'+n%26)%26+'A';
			}
			else if(tab[i][j]>='a' && tab[i][j]<='z')
			{
				tab[i][j]=(tab[i][j]-'a'+n%26)%26+'a';
			}
		}
		for(int i=0;i<=k;i++)
		{
			cout<<tab[i]<<" ";
		}
	}
	if(s=="odszyfruj")
    {
    	getline(cin,abc);
    	getline(cin,s);
    	int k=0;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]!=' ')
    		{
    			tab[k]=tab[k]+s[i];
			}
			else
			{
				k++;
			}
		}
		for(int i=0;i<=k;i++)
		{
			for(int j=0;j<tab[i].length();j++)
			if(tab[i][j]>='A' && tab[i][j]<='Z')
			{
				if(tab[i][j]-n<'A' || tab[i][j]-n>'Z')
				{
					tab[i][j]=tab[i][j]-n+26;
				}
				else 
				{
					tab[i][j]=tab[i][j]-n;
				}
			}
			else if(tab[i][j]>='a' && tab[i][j]<='z')
			{
				if(tab[i][j]-n<'a' || tab[i][j]-n>'z')
				{
					tab[i][j]=tab[i][j]-n+26;
				}
				else 
				{
					tab[i][j]=tab[i][j]-n;
				}
			}
		}
		for(int i=0;i<=k;i++)
		{
			cout<<tab[i]<<" ";
		}
	}
 
    return 0;
}
