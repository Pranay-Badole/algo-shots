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
string n="";
for(int i=1;i<400;i++)
{
	string str=to_string(i);
	n=n+str;
}
int m;
cin>>m;
cout<<n[m-1];

return 0;
}