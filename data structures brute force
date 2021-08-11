#include<bits/stdc++.h>
using namespace std;
string tab[1507];
map <string,int>sett;
int main()
{
	ios_base::sync_with_stdio(0);
 	cin.tie(0);
 	cout.tie(0);
	int n,k;cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
		sett[tab[i]]=1;
	}
	int ile=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			string x;
			for(int z=0;z<k;z++)
			{
				if(tab[i][z]==tab[j][z]) x+=tab[i][z];
				else
				{
					x+='S'+'E'+'T'-tab[i][z]-tab[j][z];
				}
				
			}
			if(sett[x]) ile++;
		}
	}
	cout<<ile/3;
	
}
