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
	#define mp 				  make_pair
	#define rep(i,a,b)        for(int i=a;i<b;i++)
	#define REP(i,a,b)        for(int i=a;i<=b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll
	#define acc				  accumulate
	#define endl			  "\n"
	#define auv(v)		      for(auto x:v) cout<<x<<' '; 
	#define aump(mp)	      for(auto x:mp) cout<<x.fr<<' '<<x.sc<<endl; 


   	void solve(){
   		unsigned int n,m;
   		cin>>n>>m;
   		int t=m%10;
   		std::vector<int>v;
   		int x=t;
   		v.pb(x);
   		while(x!=0){
   			x=x+t;
   			x=x%10;
   			v.pb(x);
   		}
   		// auv(v);cout<<endl;
   		int sum=0;
   		sum=acc(all(v),sum);   	
   		unsigned int q=(n/m)/sz(v);
   		// cout<<q<<endl;
   		int ans=q*sum;	
   		rep(i,0,(n/m)%sz(v)){
   			ans+=v[i];
   		}
   		cout<<ans<<endl;
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