#include<bits/stdc++.h>                                                         
using namespace std;  
string s,s1;    
int n;
char znak;                                                      
string  plusy[207], minusy[207];   
int xx[10007], yy[10007], zz[10007];
string dobij(string s){
	int k=0,f=0;
	string s4="";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=',' and s[i]!='-' and s[i]!='+') 
		{
			s4=s4+s[i];
			
		}
	}
	if(s.find(',')!=-1) k=s.size()-s.find(',')-1;
		for(int i=0;i<100-k;i++)
		{
			s4+="0";
		}
	return s4;
}
string dodaj(string s1,string s2){
	string s3="";
	int i=s1.size()-1,j=s2.size()-1;
	int x=0;
	int suma=0;
	for(int k=max(i,j)+1;k>=0;k--)
	{
//		cout<<s1[i]<<" "<<s2[j]<<" "<<x<<endl;
		if(s1[i]>='0' && s1[i]<='9' && s2[j]>='0' && s2[j]<='9')
		{
		suma=s1[i]+s2[j]+x-'0'-'0';
		
		x=suma/10;
		s3=(char)(suma%10+'0')+s3;

		i--;j--;
		}
		else if(s1[i]>='0' && s1[i]<='9')
		{
			suma=s1[i]+x-'0';
			x=suma/10;
			s3=(char)(suma%10+'0')+s3;
			i--;
		}
		else if(s2[j]>='0' && s2[j]<='9')
		{
			suma=s2[j]+x-'0';
			x=suma/10;
			s3=(char)(suma%10+'0')+s3;
			j--;
		}
		else if(x)
		{
			s3=(char)(x+'0')+s3;
		}
//			cout<<suma<<endl;
	}
//	cout<<s3<<endl;
//	cout<<s3.size()<<endl;
//	cout<<s3.size()<<endl;
	return s3;
	/*
	2
	-2,34
	-4,25
	
	*/
}    
void odejmowanie (string s1,string s2)
{
	bool cz=0;
	if(s1==s2){
	cout << 0;
	cz=1;
}
if(!cz)
{
string x,y;
if(s1.size()>s2.size()){
	x=s1; y=s2;
}
else if(s1.size()<s2.size()){
	x=s2; y=s1;
}
else if(s1.size()==s2.size()){
	if(s1>s2){
		x=s1; y=s2;
	}
	else{
		x=s2; y=s1;
	}
}

for(int i=0; i<x.size(); i++){
	xx[i]=x[i]-'0';
}
for(int i=0; i<y.size(); i++){
	yy[i]=y[i]-'0';
}
int k=y.size()-1;
for(int i=x.size()-1; i>=0; i--){
	if(xx[i]>=yy[k]){
		zz[i]=xx[i]-yy[k];
	}
	else{
		xx[i-1]-=1;
		xx[i]+=10;
		zz[i]=xx[i]-yy[k];
	}
	k--;
}
if(s1==y){
	cout << "-";
}
string skon="",skon2="";
for(int i=0; i<x.size(); i++){
	skon+=(char)(zz[i]+'0');
}
bool z=false;
for(int g=skon.size()-1;g>=0;g--)
{
	if(g==skon.size()-101 and z==true) skon2=","+skon2;
	if(g<=skon.size()-101 or skon[g]!='0')
	{
		skon2=skon[g]+skon2;
		z=true;
	}
	else if(skon[g]=='0' and z==true)
	{
		skon2=skon[g]+skon2;
	}
}
	z=false;
	string skon3="";
	for(int g=0;g<skon2.size();g++)
	{
		if((skon2[g]=='0' && z==true) or skon2.find(',')==g+1) 
		{
			z=true;
			skon3+=skon2[g];
		}
		else if(skon2[g]!='0') 
		{
			z=true;
			skon3+=skon2[g];
		}
	}
	cout<<skon3;
}
}                      
int main()                                                                      
{                                                                               

    ios_base::sync_with_stdio(0);                                               
    cin.tie(0);                                                                 
    cout.tie(0);                                                                

cin>>n;
int m=0,p=0;
for(int i=0;i<n;i++)
{
	string s;
	cin>>s;
	if(s[0]=='-') 
	{
		minusy[m]=dobij(s);
		m++;
	}
	else
	{
		plusy[p]=dobij(s);
		p++;
	}
	
}
/*
5
-55,5
-55,5
66,3
+66,3
+66,5

*/
string s3=minusy[0];
for(int i=1;i<m;i++)
{
	s3=dodaj(s3,minusy[i]);
//	cout<<s3<<endl;
}
string s4=plusy[0];
for(int i=1;i<p;i++)
{
	s4=dodaj(s4,plusy[i]);
//	cout<<s4<<endl;
}
//cout<<s3<<" "<<s4<<endl;
odejmowanie(s4,s3);

   return 0;                                                                    
}
