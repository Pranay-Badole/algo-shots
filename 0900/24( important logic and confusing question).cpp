#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<3;i++)
#define fim() for(int j=0;j<3;j++)
#define fiq() for(int q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int a[3][3];
	int b[3][3]={0};
	fin()
	{
		fim()
		{
			cin>>a[i][j];
			if(a[i][j]%2==0)
				a[i][j]=0;
			else
				a[i][j]=1;
		}
	}
	fin()
	{
		fim()
		if(a[i][j]==1)
		{	b[i][j]++;
			if(i>0){
                	b[i-1][j]++;		
            	}
            	if(j>0){
                	b[i][j-1]++;		
            	}
            	if(i<2){
                	b[i+1][j]++;		
            	}
            	if(j<2){
                	b[i][j+1]++;		
            	}
		}
	}
fin()
{
	fim()
	{
		if(b[i][j]%2==0)
			cout<<1;
		else 
			cout<<0;
}
cout<<'\n';
}	return 0;
}