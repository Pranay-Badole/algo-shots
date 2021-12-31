#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int j=0;j<2;i++)
#define fiq() for(int k=2;k<4;i++)

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	fin()
{	int m=0;
	int a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	int A=max(a[0],a[1]);
	int B=max(a[2],a[3]);
	int C=min(a[0],a[1]);
	int D=min(a[2],a[3]);
	if((A==B) && (C+D)==A)
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
	cout<<endl;
}

return 0;
}