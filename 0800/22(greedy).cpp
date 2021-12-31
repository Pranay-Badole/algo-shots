#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int i=0;i<q;i++)
int min(int x,int y)
{	
	if(x<y)
		return x;
	else 
		return y;
} 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
int n,m;
cin>>n>>m;
int o1=0,e1=0,o2=0,e2=0;
fin()
{
llt a;
cin>>a;
if(a%2==0)
	e1+=1;
else
	o1+=1;
}
fim()
{
llt b;
cin>>b;
if(b%2==0)
	e2+=1;
else
	o2+=1;
}
cout<<min(o1,e2)+min(o2,e1);
}