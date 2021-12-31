#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int i,n,m=0,c=0;
cin>>n;
for(i=0;i<n;i++)
{
	int x,y;
	cin>>x>>y;
if(x>y)
	m+=1;
if(y>x)
	c+=1;
}
if(m>c)
cout<<"Mishka";
else if(c>m)
cout<<"Chris";
else
{
cout<<"Friendship is magic!^^";
}
return 0;
}