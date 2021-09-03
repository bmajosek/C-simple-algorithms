#include <bits/stdc++.h>
using namespace std;
struct PUNKT{
	long long x,y;
};
PUNKT a,b,c,d,e,f;
long long pol(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3)
{
	return abs((x1-x2)*(y1-y3)-(x1-x3)*(y1-y2));
}
void g()
{
	int i=0;
	if(pol(a.x,a.y,b.x,b.y,d.x,d.y)+pol(a.x,a.y,c.x,c.y,d.x,d.y)+pol(c.x,c.y,b.x,b.y,d.x,d.y)==pol(a.x,a.y,b.x,b.y,c.x,c.y)) i++;
	if(pol(a.x,a.y,b.x,b.y,e.x,e.y)+pol(a.x,a.y,c.x,c.y,e.x,e.y)+pol(c.x,c.y,b.x,b.y,e.x,e.y)==pol(a.x,a.y,b.x,b.y,c.x,c.y)) i++;
	if(pol(a.x,a.y,b.x,b.y,f.x,f.y)+pol(a.x,a.y,c.x,c.y,f.x,f.y)+pol(c.x,c.y,b.x,b.y,f.x,f.y)==pol(a.x,a.y,b.x,b.y,c.x,c.y)) i++;
	if(i==3) cout<<"TAK";
	else cout<<"NIE";
}
int main(){

	
		cin>>a.x>>a.y>>b.x>>b.y;
		cin>>c.x>>c.y>>d.x>>d.y;
		cin>>e.x>>e.y>>f.x>>f.y;
		g();
	
	
}
