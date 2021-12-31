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
{	
	std::map<char, int> map;
 	std::map<char, int>::iterator it;
	int cnt=0;
	fin()
	{
		map[v[i][j]]++;
	}
	for(it = map.begin(); it != map.end(); it++)
	{
		if(cnt<(*it).second)
			cnt=(*it).second;
	}	
	
	int z=cnt*b[j];
	ans+=z;
}
cout<<ans;
return 0;
}

//https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/