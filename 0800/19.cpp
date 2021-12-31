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
{	int m;
	cin>>m;
	string x;
	cin>>x;
	if(m<11)
		{
			cout<<"NO"<<'\n';
			continue;
		}
	if((m==11)&&(x[0]!='8'))
	{
			cout<<"NO"<<'\n';
			continue;
	}
	int q=m-10;
	string ans="NO";
	fiq()
	{
		if(x[i]=='8')
		{
			ans="YES";
			continue;
		}
	}
	cout<<ans<<'\n';
}
return 0;
}