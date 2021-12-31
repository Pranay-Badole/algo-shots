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
int m;
cin>>m;
fim()
{	vector<int>v;
	int k,b,a=1;
	cin>>k;
	while(k>0)
	{
		b=k%10;
		k=k/10;
		a=a*10;
		if(b==0)
			continue;
		int c=b*a/10;
		v.push_back(c);
	}
cout<<v.size()<<'\n';
for(auto x:v)
cout<<x<<' ';
cout<<'\n';
}

return 0;
}

