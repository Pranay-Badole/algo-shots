#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int i=0;i<q;i++)
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
int n;
cin>>n;
for(int i=9;i>0;i--)
if(n%i==0)
{
	cout<<n/i<<'\n';
	int j=n/i;
	while(j--)
		{
			cout<<i<<' ';
		}
break;
}
return 0;
}