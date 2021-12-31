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
	#define aump(mp)	      for(auto x:mp) cout<<x.sc<<' '<<x.fr<<endl; 


	// #simpler in algoshots

	bool cmp(pair<double,int>p,pair<double,int>q){
		if(p.fr==q.fr){
			return p.sc<q.sc;
		}
		return p.fr>q.fr;
	}

   	void solve(){
   		cout<<fixed<<setprecision(2);
   		int n,t1,t2,k;
   		cin>>n>>t1>>t2>>k;
   		vector<pair<double,int>>v(n);
   		int a,b;
   		double z,x;
   		rep(i,0,n){
   			cin>>a>>b;
   			z=(a*t1*1.0*(100-k)/100)+(b*t2*1.0);
   			x=(b*t1*1.0*(100-k)/100)+(a*t2*1.0);
   			v[i].fr=max(z,x);
   			v[i].sc=i+1;
   		}
   		sort(all(v),cmp);
   		
   		aump(v);
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