#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i=i+2)
#define fim() for(int i=0;i<n-3;i=i+2)
#define fiq() for(int i=0;i<q;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		llt n;
		string m="";
		cin>>n;
		if(n%2==0)
		{
			fin()
			{m=m+"1";}
			cout<<m;
		}
		else
		{
			m=m+"7";
			fim()
			m=m+"1";
			cout<<m;
		}
	cout<<endl;
	}

	return 0;
}