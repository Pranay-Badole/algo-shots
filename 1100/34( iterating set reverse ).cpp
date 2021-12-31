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
		int m;cin>>m;
		std::vector<int> v(m);
		set<int>st1;
		set<int>st2;
		rep(i,0,m){
			int b;cin>>b;
			if(st1.count(b)){st2.insert(b);}
			st1.insert(b);
		}

		if(sz(st2)==0){cout<<sz(st1)<<endl;auv(st1);}
		else{
		int size=sz(st1)+sz(st2);
		if(*st1.rbegin()==*st2.rbegin()){
			size--;
			auto it =(--st2.end());
			st2.erase(it);
		}
		cout<<size<<endl;
		auv(st1);
		for(auto it=st2.rbegin();it!=st2.rend();it++)
			cout<<*it<<' ';
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