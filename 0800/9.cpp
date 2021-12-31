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

int n,m;
cin>>n>>m;  
vector<string>a;
vector<string>b;
fin()
{
	string d;
	cin>>d;
	a.push_back(d);
}
fim()
{
	string d;
	cin>>d;
	b.push_back(d);
}
int q;
cin>>q;
fiq()
{
	int s,t;					
	llt y;						//  My tried one(left one is better)
	cin>>y;						//	s=y%n; t=y%m;			
	s=(y-1)%n;					//	if(s==0)s=n;	
	t=(y-1)%m;					//	if(t==0)t=m;			
	cout<<a[s]+b[t]<<"\n";		//	cout<<a[s-1]+b[t-1]<<"\n";		
}
return 0;
}