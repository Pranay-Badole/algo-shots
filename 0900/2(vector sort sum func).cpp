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
	llt sum=0;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sum=accumulate(v.begin(),v.end(),sum);
	sort(v.begin(),v.end(),greater<llt>());\

	int m;
	cin>>m;
	fim()
	{
	int a;
	cin>>a;
	cout<<sum-v[a-1]<<'\n';
	}

return 0;
}