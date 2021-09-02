#include <bits/stdc++.h>
using namespace std;
int tab[7];
bool czy_jest_litera(char a)
{
	if((a>='a' && a<='z')||(a>='A' && a<='Z'))
		return true;
	return false;
}
int ile_liczb(string s)
{
	int ilosc=0,b=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			b++;
		}
		else
		{
			if(b>0) 
			{
				ilosc++;
				b=0;
			}
		}
	}
	return ilosc;
}
int ile_palindrom(string s)
{
	int pali=0,k=0,p=0;
	bool f=false;
	for(int i=0;i<s.length();i++)
	{
		if(czy_jest_litera(s[i]))
		{
			p=i;
			k=p;
			while(czy_jest_litera(s[k]))
			{
				k++;
			}
			k--;
			i=k;
			while(p<k)
			{
				if(s[p]!=s[k] && abs(s[p]-s[k])!='a'-'A') 
				{
					f=true;
					break;
				}
				p++;k--;
			}
			if(!f) pali++;
			f=false;
		
		}
	}
	return pali;
}
int ile_slow(string s)
{
	int ileslow=0;
	for(int i=0;i<s.length();i++)
	{
		if(czy_jest_litera(s[i]))
		{
			while(czy_jest_litera(s[i]))
			{
				i++;
			}
			ileslow++;
		}
	}
	return ileslow;
}
int ile_spacji(string s)
{
	int ilespacji=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ') ilespacji++;
	}
	return ilespacji;
}
int ile_zdan(string s)
{
	int ilezdan=0;
	for(int i=0;i<s.length();i++)
	{
		if(czy_jest_litera(s[i]))
		{
			while(s[i]!='.' && i<s.length())
			{
				i++;
			}
			i--;
			ilezdan++;
		}
	}
	return ilezdan;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];	
	}
	cin.ignore();
	string s;
	getline(cin,s);
	int jeden=ile_spacji(s);
	int dwa=ile_liczb(s);
	int trzy=ile_slow(s);
	int cztery=ile_zdan(s);
	int piec=ile_palindrom(s);
	for(int i=0;i<n;i++)
	{
		if(tab[i]==1)
		{
			cout<<jeden<<" ";
		}
		else if(tab[i]==2)
		{
			cout<<dwa<<" ";
		}
		else if(tab[i]==3)
		{
			cout<<trzy<<" ";
		}
		else if(tab[i]==5)
		{
			cout<<piec<<" ";
		}
		else if(tab[i]==4)
		{
			cout<<cztery-1<<" ";
		}
	}
return 0;
}
