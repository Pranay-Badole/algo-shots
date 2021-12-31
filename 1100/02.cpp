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
	int n;cin>>n;
	std::vector<int> v(n);
	rep(i,0,n)
	cin>>v[i];
	std::vector<int> b(n);
	int y=1;
	rep(i,1,n)
	{
		if(v[i]!=v[i-1])
			y=0;
	}
	if(y)
	{
		rep(i,0,n-1)cout<<1<<' ';
		cout<<0;return;
	}
	rep(i,0,n)
	{
		b[i]=v[i];
	}
	int x=1;
	sort(all(b),greater<int>());

	rep(i,0,n){
	if(v[i]!=b[i]){
		x=0;	
		break;
	}
	}
	if(x)
	{	rep(i,0,n)
		cout<<0<<' ';
		return;
	}
	
	int max=*max_element(all(v));
	int max_ex;

	auto it=find(all(v),max);
	for(auto iit=v.begin(); iit<v.end();iit++){
		if(iit==it){
			if(iit==v.end()-1){cout<<0;
				continue;
			}
			max_ex=max;
			max=*max_element(iit+1,v.end());
		
			it=find(iit+1,v.end(),max);
			if(max==max_ex)
			cout<<1<<' ';
			else cout<<0<<' ';	
		}
		else
		cout<<max-*iit+1<<' ';
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