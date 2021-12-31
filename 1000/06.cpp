#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define for(i,a,b) for(llt i=a;i<b;i++)

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	llt n;
	cin>>n;
	llt a[n];
	for(i,0,n)
		cin>>a[i];
	llt def=a[1]-a[0];
	for(i,1,n-1)
	{	if(a[i+1]-a[i]!=def)
		{
		cout<<a[n-1]; return 0;
		}
	}
	cout<<a[n-1]+def;
		return 0;

}