#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int i=0;i<q;i++)
void min(int x,int y)
{	
	if(x<y)
		cout<<"First";
	else 
		cout<<"Second";
} 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
int s, v1, v2, t1, t2;
cin>>s>>v1>>v2>>t1>>t2;
int x= t1+t1+(s*v1);
int y= t2+t2+(s*v2);
if(x==y)
{
	cout<<"Friendship";
}
else
	min(x,y);
return 0;
}