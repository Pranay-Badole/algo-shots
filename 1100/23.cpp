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
		int n;cin>>n;
		std::vector<int> v(n);
		int mx=0;
		std::map<int , int> mp;
		rep(i,0,n)cin>>v[i];
		rep(i,0,n){
			int z=v[i];
			mp[z]++;
			mx=max(mp[z],mx);
		}
		std::vector<int> twos;
		for(auto x:mp){
			if(x.sc==2)twos.pb(x.fr);
		}
		
		if(mx>=3)cout<<"YES"<<endl;
		else if(mx<=1)cout<<"NO"<<endl;
		else{ int flag=0;
			for(auto x:twos){
				auto it=find(all(v),x);
				auto iit=find(it+1,v.end(),x);
				if(iit-it>1){flag=1;break;}
			}	
			
			flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
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