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

int n,e=0,o=0;
cin>>n;
llt a[n];
fin()
{
	 cin>>a[i];
	if(a[i]%2==0)
		e+=1;
	else
		o+=1;
}
int b=abs(e-o);
if(b<2)
{cout<<0;
return 0;}
int m=0,ans=0;
sort(a,a+n);
if(e>o)
{
	fin()
	{
		if(a[i]%2==0)
		{
			m=m+1;
			ans+=a[i];
			if(m==b-1)
				{cout<<ans;
					break;}
		}
	}
}

else
{
	fin()
	{
		if(a[i]%2!=0)
		{
			m=m+1;
			ans+=a[i];
			if(m==b-1)
				{cout<<ans;
					break;}
		}
	}
}
return 0;
}