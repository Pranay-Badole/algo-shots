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


/*bool cmp(pair<int, int>p, pair<int, int>q) {

    if (p.second == q.second) {  

        return p.first > q.first;  
    }
    else {              
        return p.second > q.second;
    }*/
	void solve(){
		int n;cin>>n;
		std::map<int , int > map;
		std::vector<pii> v(n);
		rep(i,0,n){
			cin>>v[i].sc>>v[i].fr;
		}
		sort(all(v),greater<pii>());
		for(auto x: v)cout<<x.fr<<' '<<x.sc<<endl;
	int b=1,points=0;
	rep(i,0,n){
		if(b==0)break;
		b--;
		b+=v[i].fr;
		points+=v[i].sc;
	}
	 cout<<points;

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