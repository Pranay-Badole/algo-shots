#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(llt i=0;i<n;i++)
#define fjm() for(llt j=0;j<index;j++)
#define fiq() for(llt q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>>v(n);
	fin()
	{
		cin>>v[i].first;
		v[i].second=i+1;
	}

	sort(v.begin(),v.end());
	llt sum=0,index=0;
	fin()
	{	
		sum+=v[i].first;
		if(sum>k)
			break;
		index++;
	}
	
	cout<<index<<endl;
	fjm()
	{
		cout<<v[j].second<<' ';
	}
	return 0;

}