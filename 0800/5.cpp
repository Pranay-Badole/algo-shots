#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
char name[9];
int i=0,n=0,z=8;
string s="YES";
while(i<9)
{
	cin>>name[i];
	i++;
}
for(i=0;i<9;i++)
{
	if((name[i]=='X')&&(name[i]!=name[8-i]))
	{
		s="NO";
		break;
	}
	
}
cout<<s;
return 0;
}
