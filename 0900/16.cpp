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

int n,m,k,one=0,two=0;
cin>>n>>m>>k;
int ans=0,b=0;
fin()
{
	int a;
	cin>>a;
	if(a==1)
		one+=1;
	else
		two+=1;
}
if(one>m)
{
	ans=one-m;
	b=0;
}
else
b=m-one;

if((b+k)<two)
{
	ans=ans+two-(b+k);
}
cout<<ans;
return 0;
}