#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(llt i=0;i<n;i++)
#define fjm() for(llt j=0;j<m;j++)
#define fiq() for(llt q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n,m;
	cin>>n>>m;
	map<string,string>mp;
	fjm()
	{
		string a,b;
		cin>>a>>b;
		mp[a]=b;
	}
	//cout<<mp["codeforces"].length();
	fin()
	{
		string c;
		cin>>c;
		if(mp[c].length()<c.length())
		{
			cout<<mp[c]<<' ';
		}
		else
			cout<<c<<' ';
	}
	return 0;

}