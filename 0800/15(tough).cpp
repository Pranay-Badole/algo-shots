#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=2;i<n+1;i++)
#define fim() for(int i=0;i<m;i++)
#define fiq() for(int i=0;i<q;i++)
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
int n,m=2;
cin>>n;
string s="O";
vector<int>v={1,1};
fin()
{
	int x=0;
	x=v[i-1]+v[i-2];
	if(x>n)
		break;
	v.push_back(x);
	m=m+1;
}
for(int i=1;i<n;i++)
{
	s=s+"o";
}
for(auto i=v.begin();i<v.end();i++)
{	
	s[(*i)-1]='O';
	
}
cout<<s;
return 0;
}