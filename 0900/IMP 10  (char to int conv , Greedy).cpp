#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int j=0;j<m;j++)
#define fiq() for(int k=0;k<q;k++)
int main()
{

  	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
   int t;		
   cin>>t;

   while(t--)	
   {
      int n;
      cin>>n;
      string s;
      cin>>s;
      string ans="";
      fin()
      {
      	int a= s[i]-'0';
      	if(a%2==1)
      		ans+=s[i];
      	if(ans.size()==2)
      		break;
      }
      if(ans.size()==2)
      	cout<<ans;
      else
      	cout<<-1;
      cout<<endl;
  }
   return 0;
}

//https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c