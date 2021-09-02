#include <bits/stdc++.h>
using namespace std;
int x[103];
int y[103];
int odwiedzone[103];
int n;
void dfs(int a)
{
	odwiedzone[a]=true;
	for(int i=0;i<n;i++)
	{
		if(odwiedzone[i]) continue;
		if(x[i]==x[a] or y[i]==y[a])
		{
			dfs(i);
		}
	}
}
int main() {
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(odwiedzone[i]==false)
		{
			dfs(i);
			sum++;
		}
	}
	sum--;
	cout<<sum;
	
	return 0;
}
