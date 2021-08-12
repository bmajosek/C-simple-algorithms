#include<bits/stdc++.h>
using namespace std;

	vector<pair<int,int> > w[1000007];
	bool odw[1000007];
	int odl[1000007];
	int n,b,k,c;
	priority_queue<pair<int,int> > q;
int main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k>>b>>c;
	for(int i=0;i<k;i++)
	{
		int u,v,t;cin>>u>>v>>t;
		w[u].push_back(make_pair(v,t));
		w[v].push_back(make_pair(u,t));
	}
	for(int i=1;i<=n;i++)
	{
		odl[i]=1e9;
	}
	q.push(make_pair(0,1));
	while(!q.empty())
	{
		pair<int, int>v;
		v=q.top();q.pop();
		if(odw[v.second]==1) continue;
		odw[v.second]=1;
		odl[v.second]=-v.first;
		for(int i=0;i<w[v.second].size();i++)
		{
			q.push(make_pair(-(odl[v.second]+w[v.second][i].second),w[v.second][i].first));
		}
	}
	sort(odl,odl+n+1);
	int ile=0;
	long long sum=0;
	for(int i=2;i<=n;i++)
	{
		if(sum+min(odl[i]*2,c)>b) break;
		sum=sum+min(odl[i]*2,c);
		ile++;
	}
	cout<<ile+1;
return 0;
}
