#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fjm() for(int j=0;j<m;j++)
#define fkq() for(int k=0;k<q;k++)

int main()
{

  	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
 int n,m;
 cin>>n>>m;

 vector<string>v(n);
 fin()
 cin>>v[i];

 int b[m+1];
 fjm()
 cin>>b[j];

 int ans=0;
fjm()
{	int a[5]={0};
	fin()
	{
		if(v[i][j]=='A')
			a[0]+=1;
		else if(v[i][j]=='B')
			a[1]+=1;
		else if(v[i][j]=='C')
			a[2]+=1;
		else if(v[i][j]=='D')
			a[3]+=1;
		else if (v[i][j]=='E')
			a[4]+=1;
	}
	int z=*max_element(a,a+5);
	z=z*b[j];
	ans+=z;
}
cout<<ans;
return 0;
}