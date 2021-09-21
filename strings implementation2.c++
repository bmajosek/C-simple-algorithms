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

		for(int j=0;min(s.substr(j).length(),s1.substr(0,s.length()-j).length())>0;j++)
		{
//		cout<<s.substr(j)<<" "<<s1.substr(0,s.length()-j)<<endl;
			string p1,p2;
			p1=s.substr(j);
			p2=s1.substr(0,s.length()-j);
//			cout<<p1<<" "<<p2<<endl;
			if(p1==p2)
			{
				flaga=true;
				break;
				
			}
		}
		
		
//		cout<<flaga<<endl;

		for(int j=0;min(s.substr(0,s1.length()-j).length(),s1.substr(j).length())>0;j++)
		{
			string p1,p2;
			p1=s.substr(0,s1.length()-j);
			p2=s1.substr(j);
//			cout<<p1<<" "<<p2<<endl;
			if(p1==p2)
			{
				flaga=true;
				break;
				
			}
		}
//		cout<<flaga<<endl;
		if(s.find(s1)!=-1) {
		flaga=true;
		}
//		cout<<flaga<<endl;
		if(flaga==0) licznik++;
	}
	cout<<licznik;

return 0;
}
