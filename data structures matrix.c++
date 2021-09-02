#include<bits/stdc++.h>
using namespace std;
int tab[52][52];
int kolumna[52];
int wiersz[52];
int main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;cin>>t;
	while(t)
	{
		t--;
		int height,width,liczbakol,liczbarze,liczbazapkol=0;
		cin>>height>>width>>liczbarze>>liczbakol;
		if(height*liczbarze!=width*liczbakol)
		{
			cout<<"NO\n";
			continue;
		}
		for(int y=0;y<height;y++)
		{
			for(int x=0;x<width;x++)
			{
			tab[y][x]=0;	
			}
		}
		int pozycja=-1;
		for(int y=0;y<height;y++)
		{
			for(int x=0;x<liczbarze;x++)
			{
				pozycja++;
				if(pozycja==width)
				{
					pozycja=0;
				}	
				tab[y][pozycja]=1;
			}
		}
		
			cout<<"YES\n";
		for(int y=0;y<height;y++)
		{
			for(int x=0;x<width;x++)
			{
			cout<<tab[y][x];	
			}
			cout<<"\n";
		}
	
		
		
	}
	
return 0;
}
