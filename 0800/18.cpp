#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int i=0;i<4;i++)
#define fiq() for(int i=0;i<q;i++)
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
int n;
cin>>n;
fin()
{
	llt a[4];
	fim()
	{
		cin>>a[i];
	}

cout<<a[0]<<' '<<a[2]<<' '<<a[2]<<'\n';
}
return 0;
}