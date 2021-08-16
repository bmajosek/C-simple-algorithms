#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	string s;cin>>s;
	int rgb=0,rbg=0,gbr=0,grb=0,bgr=0,brg=0;
	for(int i=0;i<n;i++)
	{
		if(i%3==0)
		{
			if(s[i]=='R') 
			{
				gbr++;
				grb++;
				brg++;
				bgr++;
			}
			if(s[i]=='B') 
			{
				gbr++;
				grb++;
				rgb++;
				rbg++;
			}
			if(s[i]=='G') 
			{
				rgb++;
				rbg++;
				brg++;
				bgr++;
			}
		}
		if(i%3==1)
		{
			if(s[i]=='G')
			{
				grb++;
				brg++;
				gbr++;
				rbg++;
			}
			if(s[i]=='R')
			{
				rgb++;
				rbg++;
				gbr++;
				bgr++;
			}
			if(s[i]=='B')
			{
				grb++;
				brg++;
				rgb++;
				bgr++;
			}
		}
		if(i%3==2)
		{
			if(s[i]=='B')
			{
				bgr++;
				brg++;
				gbr++;
				rbg++;
			}	
			if(s[i]=='R')
			{
				rgb++;
				rbg++;
				brg++;
				grb++;
			}	
			if(s[i]=='G')
			{
				gbr++;
				grb++;
				rgb++;
				bgr++;
			}	
		}	
	}
	int x=min(min(min(min(min(grb,gbr),brg),bgr),rgb),rbg);
	cout<<x<<"\n";
	if(bgr==x)
	{
		
		string c="BGR";
		for(int i=0;i<n;i++)
		{
			cout<<c[i%3];
		}
		return 0;
	}
	if(brg==x)
	{
		string c="BRG";
		for(int i=0;i<n;i++)
		{
			cout<<c[i%3];
		}
		return 0;
	}
	if(gbr==x)
	{
		string c="GBR";
		for(int i=0;i<n;i++)
		{
			cout<<c[i%3];
		}
		return 0;
	}
	if(grb==x)
	{
		
		string c="GRB";
		for(int i=0;i<n;i++)
		{
			cout<<c[i%3];
		}
		return 0;
	}
	if(rgb==x)
	{
		string c="RGB";
		for(int i=0;i<n;i++)
		{
			cout<<c[i%3];
		}
		return 0;
	}
	if(rbg==x)
	{
		string c="RBG";
		for(int i=0;i<n;i++)
		{
			cout<<c[i%3];
		}
		return 0;
	}
	return 0;
}
