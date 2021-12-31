#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(llt i=1;i<n;i++)
#define fjm() for(llt j=0;j<n;j++)
#define fiq() for(llt q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	bool change= true ;
	int n=s.length();
	if((s[0]-'a')>=0)
	{
		fin()
		{	if((s[i]-'a')>=0)
			change= false;
		}
		if(change)
		{
			s[0]-=32;
			fin()
			s[i]+=32;
		}
	}
	else
	{
		fin()
		if((s[i]-'a')>=0)
			change=false;
		if(change)
			fjm()
		s[j]+=32;		

	}
	
	cout<<s;
	return 0;

}