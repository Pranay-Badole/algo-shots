#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,x;
cin>>n;
string s="EASY";
while(n--)
{
	cin>>x;
	if(x==1)
	{
		s="HARD";
		break;
	}
}
cout<<s;
return 0;
}
