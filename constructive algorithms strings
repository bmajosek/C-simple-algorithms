#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
 	cin.tie(0);
 	cout.tie(0);
 	int n,m;
 	cin>>n>>m;
	string s;
	for(int i=0;i<m;i++)
	{
		char x='a'+i;
		s.push_back(x);
		for(int j=i+1;j<m;j++)
		{

			char y='a'+j;
			s.push_back(x);
			s.push_back(y);
		}
	}
	for(int i=0;i<n;i++) cout<<s[i%s.size()];
	
	
}
