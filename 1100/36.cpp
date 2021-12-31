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
		
		int a[3];
		rep(i,0,3)cin>>a[i];
		sort(a,a+3);
		int ans=0;
		if(a[0]<=a[2]-a[1]){
			a[2]-=a[0];
			ans+=a[0];
			ans+=min(a[1],a[2]);
			cout<<ans<<endl;
		}
		
		else{
			int x=a[2]-a[1];
			ans+=x;
			a[0]-=x;
			a[2]=a[1];
			
		ans+=a[1]-(a[0]/2);
		if(a[0]%2==1)ans--;
		ans+=a[0];
		cout<<ans<<endl;
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