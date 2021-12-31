#include<bits/stdc++.h>
using namespace std;
#define llt long long int
#define fin() for(int i=0;i<n;i++)
#define fim() for(int j=0;j<3;j++)
#define fiq() for(int q=0;q<3;q++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	std::map<char, int> mp;
	mp['6']=6;mp['7']=7;mp['8']=8;mp['9']=9;
	mp['T']=10;mp['J']=11;mp['Q']=12;mp['K']=13;mp['A']=14;
	char a;
	cin>>a;
	string f,s;
	cin>>f>>s;
	if(f[1]==a && s[1]!=a)
	{
		cout<<"YES";
		return 0;
	}
	if(f[1]!=s[1])
	{
		cout<<"NO";
		return 0;
	}
	if(mp[f[0]]>mp[s[0]])
		cout<<"YES";
	else
		cout<<"NO";

	return 0;

}



//algoshots_soln(diff. logic)

//t = str(input())
//s1, s2 = map(str,input().split())
//temp = "6789TJQKA"
//if s1[1] == s2[1]:
//	print("YES" if temp.find(s1[0]) > temp.find(s2[0]) else "NO")
//else:
//	print("YES" if s1[1] == t else "NO")