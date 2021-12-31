#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int j=0;j<n;j++)
#define fiq() for(int i=0;i<q;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	fin()
	cin>>a[i];
	sort(a,a+n);
	fin()
	cout<<a[i]<<' ';

	return 0;
}