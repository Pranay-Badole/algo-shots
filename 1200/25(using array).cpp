#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
		#endif

    // your code goes here
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    cin>>n;
    int flag=0,count=0,count2=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if(arr[i]==29){arr[i]=28;count2++;}
    }
    for(int i=0;i<12;i++)
    {
    	count=i;
    	for(int j=0;j<n;j++)
    	{
        	flag=0;
        	if(months[count]!=arr[j])
        	{
            
                	flag=1;	//if we find a mismatch other than the mismatch of 28 with 29,we set the flag and break from current iteration

                	break;
            	
        	}
       	 
            	count=count<11?count+1:0;
       	 
    	}
    	if(flag==0)
    	break;
   	 
    }
    if(flag==1)
    cout<<"NO"<<endl;
    else
    {
    	//even if we have found a matching sequence the number of februaries with 29 days should be less than 2
    	if(count2>=2)
    	cout<<"NO"<<endl;
    	else
    	cout<<"YES"<<endl;
    }
    return 0;
}