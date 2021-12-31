#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=n-1;i>-1;i--)
#define fim() for(int j=0;j<n;j++)
#define fiq() for(int i=0;i<q;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int k,n;
	cin>>n>>k;
	string s;
	cin>>s;
	if(k>n/2)
	{
		for(int i=k;i<n;i++)
			cout<<"RIGHT"<<'\n';
		fin()
		{
		cout<<"PRINT "+s.substr(i,1)<<'\n';      //cout<<"PRINT "<<s[i]<<'\n';
		if(i==0)
			break;
		cout<<"LEFT"<<'\n';	
		}
	}
	else
	{
		for(int i=k;i>1;i--)
			cout<<"LEFT"<<'\n';
		fim()
		{
		cout<<"PRINT "+s.substr(j,1)<<'\n';
		if(j==n-1)
			break;
		cout<<"RIGHT"<<'\n';	
		}
	}
	return 0;
}