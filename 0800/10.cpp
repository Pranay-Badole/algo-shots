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
int m=0;
string a;
cin>>a;
int n=a.length();
fin()
{
	if(a[i]=='a')
		m=m+1;
}
if(m>n/2)
cout<<n;
else
cout<<(2*m)-1;	
return 0;
}

