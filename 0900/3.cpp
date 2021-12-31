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

	llt n;
	cin>>n;
	vector<int>v={0,0,0,0};
	fin()
	{
	int z;
	cin>>z;
	v[z]+=1;
	}
	llt a=*max_element(v.begin(),v.end());
	cout<<n-a;
	return 0;
}