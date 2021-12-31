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

int n;
cin>>n;
llt a[n],b[n];
fin()
cin>>a[i];
fin()
cin>>b[i];
int c=0,d=0;
fin()
{
	c=c|a[i];
	d=d|b[i];
}
cout<<c+d;

return 0;
}