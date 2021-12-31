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
 if(m>n)
 {
   cout<<-1;
   return 0;
 }
 llt a[n];
 fin()
{
 cin>>a[i];
}
sort(a,a+n,greater<llt>());

cout<< a[m-1]<<' '<<a[m-1];
   
return 0;
}