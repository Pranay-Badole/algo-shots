#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int k=2;k<4;i++)

int points(int p,int t)
{
	int x=3*p/10;
	int y=p-((p*t)/250);
	return max(x,y);	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int a,b,c,d,m,v;
	cin>>a>>b>>c>>d;
	m=points(a,c);
	v=points(b,d);

	if(m>v)
		cout<<"Misha";
	else if(v>m)
		cout<<"Vasya";
	else
		cout<<"Tie";
return 0;
}