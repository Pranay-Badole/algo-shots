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
int a,b,c,d,n,ans;
cin>>a>>b>>c>>d;
if(b<c)			// no need to write this if statement
	n=1;		// i.e for (b<c)
else
{ 
	if(b%c==0)
		n=(b/c);
	else
		n=(b/c)+1;
}
n=n*a;
int m;
if(n%d==0)
	m=n/d;
else
	m=(n/d)+1;

cout<<m;
return 0;
}

