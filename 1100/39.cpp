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
	bool cmp(pii p,pii q){
		return p.sc>q.sc;
	}	
	void solve(){
		std::map<int , int> mp;
		std::vector<pii> v;
		rep(i,0,6){
			int a;cin>>a;
			mp[a]++;
		}
		/*for(auto x:mp)
			v.pb(x.sc);
		
		sort(all(v),greater<int>());
		if(sz(v)==1)cout<<"Elephant";
		else if(v[0]<4)cout<<"Alien";
		else if(v[0]==5)cout<<"Bear";
		else if(v[0]==4&&v[1]==2)cout<<"Elephant";
		else cout<<"Bear";*/		

		if(sz(mp)>3)cout<<"Alien";
		else if(sz(mp)==1)cout<<"Elephant";
		else{
			for(auto x:mp)
				v.pb(x);
			sort(all(v),cmp);
		if(v[0].sc<4)cout<<"Alien";
		else if(v[0].sc==5)cout<<"Bear";
		else{
			if(v[1].sc==2)cout<<"Elephant";
			else cout<<"Bear";
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