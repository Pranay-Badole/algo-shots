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
	int n,ans=0;
	cin>>n;
	float a[n],sum=0;
	fin()
	{
	cin>>a[i];
	}
	sum=accumulate(a,a+n,sum);
	float avg=sum/n;
	sort(a,a+n);
	if(avg>=4.5)
	{
		cout<<0;
		return 0;
	}
	fin()
	{	int s=0;
		sum=sum+5-a[i];
		avg=sum/n;
		ans+=1;
		if(avg>=4.5)
			{	
				cout<<ans;
				break;
			}
	}

	return 0;
}