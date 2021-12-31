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
llt n;
cin>>n;
int a[5]={100,20,10,5,1};
int ans=0;
while(n)
{	int m;
	for(int i=0;i<5;i++)
		if(a[i]<=n)
		{
			m=a[i];
			break;
		}
	ans+=n/m;
	n=n%m;
}
cout<<ans;
return 0;
}