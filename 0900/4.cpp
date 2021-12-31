#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int k=2;k<4;i++)

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	llt n,x,y;
	cin>>n>>x>>y;
	llt z=0.01*y*n;
	if((y*n)%100!=0)
		z+=1;
	if(x>=z)
	{
		cout<<0;
		return 0;
	}
	cout<<z-x;
	return 0;
}