#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i=i+2)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int i=0;i<q;i++)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
int a;
cin>>a;
int n=a;
cout<<a/2<<endl;
if(a%2==1)
{	n=a-3;
	cout<<3<<' ';
}
fin()
cout<<2<<' ';
return 0;
}

