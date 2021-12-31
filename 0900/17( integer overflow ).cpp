#include<bits/stdc++.h>
using namespace std;
#define llt unsigned long long int
#define fin() for(int i=0;i<n;i++)
#define fjm() for(int j=0;j<m;j++)
#define fkq() for(int k=0;k<q;k++)
 
int main()
{
 
  	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
 
int n;
llt x=0,y=0;
cin>>n;
int a[n];
fin()
{
	cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n/2;i++)
	x+=a[i];
for(int i=n/2;i<n;i++)
	y+=a[i];
llt ans=(x*x)+(y*y);
cout<<ans;
return 0;
}