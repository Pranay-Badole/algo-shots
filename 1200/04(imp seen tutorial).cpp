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
   		int n;
   		cin>>n; 	
   		set<int>s;

   		int a[n];
   		int q[n];
   		rep(i,0,n){cin>>q[i];s.insert(q[i]);}
   		a[0]=q[0];
   		rep(i,1,n){
   			if(q[i]>q[i-1])
   				{a[i]=q[i];}
   			else{
   				a[i]=0;
   			}
   		}
   			rep(i,1,n+1){
   				if(s.count(i)){s.erase(i);}
   				else{s.insert(i);}
   			}
   		int mx=a[0];
   		rep(i,1,n){
   			if(a[i]==0){a[i]=*s.begin();
   				s.erase(*s.begin());}
   				mx=max(mx,a[i]);
   				if(mx!=q[i]){
   					cout<<-1<<endl;return;
   				}
   		}	
   		auv(a);cout<<endl;

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