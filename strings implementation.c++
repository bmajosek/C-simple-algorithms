#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie();
	int t;cin>>t;
	int licznik=0;
	for(int i=0;i<t;i++)
	{
		bool flaga=false;
		string s,s1;cin>>s>>s1;
		string a=s+s1;
		string b=s+s1;
		if(s.find(s1)!=-1) {
			flaga=true;
			a=s;
			}
		if(!flaga)
		{
		for(int j=0;min(s.substr(j).length(),s1.substr(0,s.length()-j).length())>0;j++)
		{
			string p1,p2;
			p1=s.substr(j);
			p2=s1.substr(0,s.length()-j);
			if(p1==p2)
			{
				flaga=true;
				a=s.substr(0,j)+s1;
				break;
				
			}
		}
		for(int j=0;min(s.substr(0,s1.length()-j).length(),s1.substr(j).length())>0;j++)
		{
			string p1,p2;
			p1=s.substr(0,s1.length()-j);
			p2=s1.substr(j);
			if(p1==p2)
			{
				flaga=true;
				b=s1.substr(0,j)+s;
				break;
				
			}
		}
		}
		if(a.length()<=b.length())
		cout<<a<<endl;
		else cout<<b<<endl;
	}


return 0;
}
