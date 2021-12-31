#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int j=0;j<m;j++)
#define fiq() for(int k=0;k<q;k++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int m;
	cin>>m;	
	fim()
	{
	llt ans=0,n,k;
	cin>>n>>k;
	while(n>0)
	{
		if(n%k==0)
		{
			n=n/k;
			ans+=1;
		}
		else
		{
			llt rem=n%k;    //n=n-1;    use left one
			ans+=rem;		//ans+=1	as reducing 1-1 at a time will be too time consuming 
			n=n-rem;		//          thus will show "Time limit exceeded" error
		}

	}
	cout<<ans<<endl;
	}	
	return 0;
}