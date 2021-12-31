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
	int n,k;
	cin>>n>>k;
	std::vector<int> v(n);
	std::vector<int> a;
	rep(i,0,n)
	{
		cin>>v[i];
	}
	int sum=0;
	sum=accumulate(all(v),sum);
	// cout<<sum;
	if(sum%k==0)
	{	
	int add=0,x=0;
		rep(i,0,n)
		{
			add+=v[i];
			x++;
			if(add==sum/k)
			{
				a.pb(x);
				add=0;
				x=0;
			}
			if(add>sum/k)
				{cout<<"No";return;}
		}
	}
	else{
		cout<<"No";return;
	}

	cout<<"Yes"<<endl;
	for(auto x:a)
		cout<<x<<' ';
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