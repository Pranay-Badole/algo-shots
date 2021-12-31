// much simpler

/*	#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=max(a*b*c,a+b+c);
    if(a>=c)
    {
        cout<<max(d,a*(b+c));
    }
    else 
    {
        cout<<max(d,(a+b)*c);
    }
    return 0; 
}*/
#include "bits/stdc++.h"
	using namespace std;
	#define int              long long 
	#define pb                push_back
	#define ppb               pop_back
	#define pf                push_front
	#define ppf               pop_front
	#define all(x)            (x).begin(),(x).end()
	#define uniq(v)           (v).erase(unique(all(v)),(v).end())
	#define sz(x)             (int)((x).size())
	#define fr                first
	#define sc                second
	#define pii               pair<int,int>
	#define rep(i,a,b)        for(int i=a;i<b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll

	void solve(){
    int a[3],count=0;
	rep(i,0,3)
		cin>>a[i];
	for(auto x:a)
	{
		if(x==1)
			count++;
	}
	if(count==0)	
	{
		cout<<a[0]*a[1]*a[2];
	}
	if((count==2 && a[1]!=1) || count==3)
	{
		cout<<a[0]+a[1]+a[2];
	}
	if(count==2 && a[1]==1)
	{
		sort(a,a+3);
		cout<<(a[0]+a[1])*a[2];
	}
	if(count==1)
		{if(a[0]==1)
			{
				cout<<(1+a[1])*a[2];
			}
		 if(a[1]==1)
		 {
		 	cout<<(1+min(a[0],a[2]))*max(a[0],a[2]);
		 }
		 if(a[2]==1)
		 	{
				cout<<(1+a[1])*a[0];
			}
		}
   } 
   	
	signed main(){
		ios_base::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
		#endif
		#ifdef SIEVE
			sieve();
		#endif
		#ifdef NCR
			init();
		#endif

		int t=1;
		// cin>>t;
		while(t--) solve();
		return 0;
	}


// easy way below;

/*
	#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=max(a*b*c,a+b+c);
    if(a>=c)
    {
        cout<<max(d,a*(b+c));
    }
    else 
    {
        cout<<max(d,(a+b)*c);
    }
    return 0; 
}*/