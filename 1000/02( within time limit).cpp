#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(llt i=0;i<n;i++)
#define fjm() for(llt j=0;j<n;j++)
#define fiq() for(llt q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	llt n;
	cin>>n;
	std::map<llt, llt> mp;
	std::vector<llt> a;
	std::vector<llt> b;
	while(n--)
	{	llt q;
		cin>>q;
		mp[q]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{	if(it->second>=3)
			{cout<<"NO"; return 0;}
		if(it->second==2)
		{
			a.push_back(it->first);
		}
		b.push_back(it->first);
	}
	cout<<"YES"<<endl<<a.size()<<endl;

	for(auto it=a.begin();it!=a.end();it++)
		cout<<*it<<' ';
	cout<<endl<<b.size()<<endl;
	for(auto it=b.rbegin();it!=b.rend();it++)
		cout<<*it<<' ';
	return 0;

}