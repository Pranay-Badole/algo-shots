#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fjm() for(int j=0;j<m;j++)
#define fiq() for(int k=0;k<q;k++)

int main()
{

  	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
 int n,m;
 cin>>n>>m;
 int v[n];
 int z[m];
 fin()
 cin>>v[i];
 fjm()
 cin>>z[j];
 sort(v,v+n);
 sort(z,z+m);
fin()
{
   fjm()
   {
      if(z[j]==v[i])
      {
         cout<<z[j];
         return 0;
      }
   }
}
int A=v[0];
int B=z[0];
if(A<B)
   cout<<A<<B;
 else
   cout<<B<<A;
   
return 0;
}