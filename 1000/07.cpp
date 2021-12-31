#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define for(i,a,b) for(llt i=a;i<b;i++)
#define fjm() for(llt j=0;j<n;j++)
#define fiq() for(llt q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	llt t;
	cin>>t;
	while(t--)
	{
		llt n;
		cin>>n;
		unsigned llt ans=0;
		llt m=3;
		for(i,0,n/2)
		{
			ans+=(i+1)*(m-1)*4;
			m+=2;
		}
		cout<<ans<<endl;
	}
	return 0;

}