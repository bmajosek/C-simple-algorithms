#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie();
	int t;cin>>t;
	int licznik=0;
	for(int i=0;i<t;i++)
	{
		string s,s1;cin>>s>>s1;
		if(s.find(s1,0)!=-1) {
		licznik++;
		}
		
	}
	cout<<licznik;
return 0;
}
