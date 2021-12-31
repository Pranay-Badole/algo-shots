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
	#define acc				  accumulate
	#define auv(v)		      for(auto x:v) cout<<x<<' '; 
	#define aump(mp)	      for(auto x:mp) cout<<x.fr<<' '<<x.sc<<endl; 
	
   	void solve(){
   		int n,x;
   		cin>>n>>x;
   		int a[n];
   		int sum=0;
   		rep(i,0,n){cin>>a[i];sum+=a[i];
   		}
   		if(sum%x!=0){cout<<n<<endl;return;}
   		int l=n,r=n;
   		rep(i,0,n){
   			if(a[i]%x!=0){l=i+1;break;}
   		}
   		rep(i,0,n){
   			if(a[n-1-i]%x!=0){
   				r=i+1;break;
   			}}
   		int z=min(l,r);
   		if(z==n){cout<<-1<<endl;}
   		else{
   			cout<<n-z<<endl;
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
		cin>>t;
		while(t--) solve();
		return 0;
	}