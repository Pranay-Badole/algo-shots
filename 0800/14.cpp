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
int n,m,ans=1;
cin>>n>>m;
vector<int>v;
fin(){
int a;
cin>>a;
v.push_back(a);
}
for(int i=0;i<n-1;i++)
{
	if((v[i+1]-v[i])>m)
		ans=1;
 
	else
		ans=ans+1;
}
cout<<ans;
return 0;
}