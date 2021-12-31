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
int n;
cin>>n;
fin()
{
	int a,b;
	cin>>a>>b;
	if(a==b)
		cout<<0;
	else if(a<b)
	{
		if((a+b)%2==0)
			cout<<2;
		else
			cout<<1;
	}
	else
		if((a+b)%2==0)
			cout<<1;
		else
			cout<<2;
		cout<<endl;
}
return 0;
}