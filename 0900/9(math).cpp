#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fjm() for(int j=0;j<m;j++)
#define fkq() for(int k=0;k<q;k++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	llt n,k;
	cin>>n>>k;
	
	if(k>(n+1)/2)
		{
			k=k-(n+1)/2;
			cout<<2*k;		
		}
	else
		cout<<(2*k)-1;
	return 0;
}