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
		int n,k;cin>>n>>k;
		std::vector<int> v;
		int q=1;
		int m=n;
		rep(i,2,n){
			if(q==k|| m<=1)break;
			if(m%i==0){
				v.pb(i);q++;
				m=m/i;
				i=i-1;
				
			}
		}
		if(m<=1){
			if(sz(v)==k){
				for(auto x: v)cout<<x<<' ';
			}
			else cout<<-1;
		}
		else{
			if(sz(v)==k-1){
				for(auto x: v)cout<<x<<' ';
					cout<<m;
			}
			else cout<<-1;

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