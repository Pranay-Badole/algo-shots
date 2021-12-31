#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(i=0;i<n;i++)
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int q=5;
string a,b,c;
string ans="NO";
cin>>a;
b=a.substr(0,1);
c=a.substr(1,1);
while(q--)
{
	string d;
	cin>>d;
	if((b==d.substr(0,1))||(c==d.substr(1,1)))
	{
		ans="YES";break;
	}
}
cout<<ans;
return 0;
}