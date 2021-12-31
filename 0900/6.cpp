#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int j=0;j<m;i++)
#define fiq() for(int k=0;k<q;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	fin()
	{
	cin>>a[i]>>b[i];
	if(a[i]!=b[i])
	{
		cout<<"rated";
		return 0;
	}

	}
	fin()
	{
		if(a[i+1]>a[i])
		{
			cout<<"unrated";
			return 0;
		}
	}
	cout<<"maybe";	
	return 0;
}