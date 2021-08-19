#include <bits/stdc++.h> 
using namespace std; 
  int tabx[10];
  int taby[10];
   int tabx2[10];
  int taby2[10];
struct PUNKT{
	int x,y;
	
};
PUNKT p[1000007];

bool f(const PUNKT &a,const PUNKT &b)
{
	return (a.x<b.x || (a.x==b.x && a.y<b.y));
}

int main() 
{ 
    
    for(int i=0;i<3;i++)
    {
    	cin>>p[i].x>>p[i].y;
	}
	sort(p,p+3,f);
	 for(int i=0;i<3;i++)
    {
    	tabx[i]=p[i].x;
    	taby[i]=p[i].y;
	}
	for(int i=0;i<3;i++)
    {
    	cin>>p[i].x>>p[i].y;
	}
	sort(p,p+3,f);
	 for(int i=0;i<3;i++)
    {
    	tabx2[i]=p[i].x;
    	taby2[i]=p[i].y;
	}
	
}
