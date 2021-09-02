#include<bits/stdc++.h>

using namespace std;
string s,s1;
long long tab[10007];
	stack<char>stos;
bool czy(char a,char b)
	{
		int a1=0,b1=0;
		if(a=='+') a1=1;
		if(b=='+') b1=1;
		if(a=='-') a1=1;
		if(b=='-') b1=1;
		if(a=='*') a1=2;
		if(b=='*') b1=2;
		if(a=='/') a1=2;
		if(b=='/') b1=2;
		if(a1>=b1) return true;
		return false;
	}
void onp(string a)
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]>='0' && a[i]<='9')
			{
				s1+=a[i];
				if(a[i+1]<'0' or a[i+1]>'9')
				{
					s1+=" ";
					
				}
			}
			else if(a[i]=='(' && a[i+1]=='-')
			{
				s1+="0 ";
				s1+=a[i+2];
				s1+=" - ";
				i+=2;
			}
			else if(a[i]=='+' or a[i]=='-' or a[i]=='*' or a[i]=='/')
			{
				while(!stos.empty() && czy(stos.top(),a[i])) 
				{
					s1+=stos.top();
					s1+=" ";
					stos.pop();
				}
				stos.push(a[i]);
			}
			else if(a[i]=='(')
			{
				stos.push(a[i]);
			}
			else if(a[i]==')')
			{
				while(!stos.empty())
				{
					if(stos.top()=='(') 
					{
						stos.pop();break;
					}
					s1+=stos.top();
					s1+=" ";
					stos.pop();
				}
			}
		}
		while(!stos.empty()) 
		{
			s1+=stos.top();
			s1+=" ";
			stos.pop();
		}
		return;
	}
long long sumowa(string s)
{
	int k=0;
		long long sum=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='0' && s[i]<='9')
			{
			sum=sum*10+s[i]-'0';
			}
			else if(s[i]==' ' && (s[i-1]>='0' && s[i-1]<='9'))
			{
				tab[k]=sum;
				k++;
				sum=0;				
			}
			else if(s[i]<'0' || s[i]>'9'){
				if(s[i]=='+')
				{
					tab[k-2]=tab[k-2]+tab[k-1];
					k--;
				}
				else if(s[i]=='-')
				{
					
					tab[k-2]=tab[k-2]-tab[k-1];
					k--;
				}
				else if(s[i]=='*')
				{
					
					tab[k-2]=tab[k-2]*tab[k-1];
				
					k--;
				}
				else if(s[i]=='/')
				{
					
					tab[k-2]=tab[k-2]/tab[k-1];
					k--;
				}

			}
		}
	
//		for(int i=0;i<k;i++)
//		{
//			cout<<tab[i]<<endl;
//		}
		return tab[k-1];
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie();
	getline(cin,s);
	onp(s);
//	cout<<s1<<endl;
	cout<<sumowa(s1);
return 0;
}
