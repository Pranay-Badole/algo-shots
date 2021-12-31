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
	std::vector<llt> v(n);
	std::vector<llt>:: iterator it;
	std::vector<llt> a;
	fin()
	cin>>v[i];
	sort(v.begin(), v.end());
	fin()
	{	llt q=1;
		fjm()
		{	
			if(v[j]==v[i] && i!=j)
			{	q++;
			}
		}
		if(q>=3)
			{cout<<"NO"; return 0;}
	}
cout<<"YES"<<endl;
llt q;
fin()
{	if(q==v[i])
	{	a.push_back(q);
		continue;
	}
	q=v[i];
}
cout<<a.size()<<endl;
for(it=a.begin();it!=a.end();it++)
cout<<*it<<' ';
cout<<endl<<n-a.size()<<endl;
llt z;
for(llt i=n;i>0;i--)
{	if(z==v[i-1])
	{	
		continue;
	}
	cout<<v[i-1]<<' ';
	z=v[i-1];
}


	return 0;

}