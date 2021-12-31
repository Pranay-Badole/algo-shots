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
llt q;
cin>>q;
fiq()
{
	llt n,m;
	cin>>n>>m;
	llt a[n];
	fin()
	cin>>a[i];
	double sum=0;
	fin()
	{
		sum+=a[i];
	}
	if(sum>m)
		sum=m;
cout<<sum<<endl;
}
return 0;
}