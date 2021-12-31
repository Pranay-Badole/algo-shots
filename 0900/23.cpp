#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i>r;i++)
#define fim() for(int j=0;j<n;j++)
#define fiq() for(int i=0;i<q;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,l,r;
	llt q=2;
	llt min=0,max=0;
	cin>>n>>l>>r;
	for(int i=0;i<n-l+1;i++)
	{
		min++;
	}
	for(int j=1;j<l;j++)
	{	
		min=min+q;
		q*=2;
	}
	cout<<min<<' ';
	llt t=1;
	for(int j=1;j<r+1;j++)
	{	
		max+=t;
		if(j==r)
			break;
		t*=2;
	}
	for(int i=0;i<n-r;i++)
	max+=t;
	cout<<max;		
	return 0;
}