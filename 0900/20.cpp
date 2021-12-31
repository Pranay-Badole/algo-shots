#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(llt i=0;i<n;i++)
#define fim() for(int j=0;j<n;j++)
#define fiq() for(int i=0;i<q;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	llt n;
	cin>>n;
	int max=0;
	fin()
	{	
		llt a,b;
		cin>>a>>b;
		if((a+b)>max)
			max=a+b;
	}
	cout<<max;
	return 0;
}