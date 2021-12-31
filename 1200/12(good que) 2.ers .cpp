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
   		int n,m;
   		cin>>n>>m;
   		std::vector<int> v;
   		std::vector<int> t;
   		std::vector<double> avg;
   		int z;
   		rep(i,0,n+m){
   			cin>>z;
   			v.pb(z);
   		}
   		int T;
   		rep(i,0,n+m){
   			cin>>T;
   			if(T){
   				t.pb(v[i]);
   			}
   		}
   		if(m==1){cout<<n;return;}
   		rep(i,0,m-1){
   			avg.pb(1.0*(t[i]+t[i+1])/2);
   		}
   		int q=0;
   		int i=0;
   		int j=0;
   		for(i=0;i<m+n;i++){
   			if(v[i]>avg[q]){
   				cout<<i-j-1<<' ';
   				q++;
   				j=i;
   			}
   			if(q==m-1){
   				break;
   			}
   			}
  	
   			cout<<n+m-1-i;
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