#include<bits/stdc++.h>
using namespace std;

vector<int>fib;
map<int,int>nums;
int solve(int it,int sum)
{
	if(sum==0)
		return 1;
	else if(sum<0 || it<0)
		return 0;
	int key=sum-it;
	if(nums.find(key)==nums.end())
	{
		int tmp1=solve(it-1,sum-fib[it]);
		int tmp2=solve(it-1,sum);
		nums[key]=tmp1+tmp2;
	}
	return nums[key];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	fib.push_back(1);
	fib.push_back(1);
	int n;
	cin>>n;
	int j=1;
	while(fib[j]+fib[j-1]<n)
	{
		fib.push_back(fib[j]+fib[j-1]);
		j++;
	}
	fib.erase(fib.begin());
	cout<<solve(fib.size()-1,n)<<endl;

	return 0;
}
