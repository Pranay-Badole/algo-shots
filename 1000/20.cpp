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
    int n;
    cin>>n;
    // much simpler
/*       while(n--)
   {
   	if(n%4>1)
   		cout<<'a';
   	else
   		cout<<'b';
   }*/
   while(n--)
   {
   	cout<<"a";
   	if(n==0)
   		return;
   	n=n-1;
   	cout<<"a";
   	if(n==0)
   		return;
   	n=n-1;
   		cout<<"b";
   	if(n==0)
   		return;
   	n=n-1;
   	cout<<"b";
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