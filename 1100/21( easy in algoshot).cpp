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
	#define auto(v)		      for(auto x:v) cout<<x<<' '; 
	#define automp(mp)	      for(auto x:mp) cout<<x.fr<<' '<<x.sc<<endl; 

	void solve(){
		int n,m;cin>>n>>m;
		std::vector<int> v;
		std::map<int , int> mp;
		rep(i,0,n){
		int a; cin>>a;mp[a]++;		
	}


		int q=sz(mp);
	 	v.insert(v.begin(),mp[q]);
	 	int sum=mp[q];
	 	for(int i=q-1;i>1;i--){
	 		sum+=mp[i];
	 		v.insert(v.begin(),sum);
	 	}
		 int ans=0;
		 rep(i,0,sz(v)){
		 	ans+=(mp[i+1]*v[i]);
		 }
		 cout<<ans;
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