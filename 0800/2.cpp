#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
llt	a,b,x,y,z,Y,B,ans=0;
cin>>a>>b;
cin>>x>>y>>z; 
//cout<<x<<' '<<y<<' '<<z<<endl;
Y=(x*2)+y;
B=y+(z*3);
//cout<<Y<<' '<<B<<'\n';
if(a<Y)
ans=Y-a;
if(b<B)
ans=ans+(B-b);
cout<<ans;
return 0;
}