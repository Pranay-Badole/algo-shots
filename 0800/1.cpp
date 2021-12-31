#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int a)
{
	long long int i,n;
	n=1;
	for(i=a;i>0;i--)
	{
		n=n*i;
		
	}
return n;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
long long int x,y,result;

cin>>x>>y;
cout<<x<<' '<<y<<'\n';
result=fact(min(x,y));
cout<<result;

return 0;
}