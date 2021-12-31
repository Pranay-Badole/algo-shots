#include<cstdio>
#include<algorithm>
using namespace std;
int N,K,Num,A[200005];
inline int read(){
	int Res=0;char ch=getchar();
	while (ch>'9'||ch<'0') ch=getchar();
	while (ch>='0'&&ch<='9') Res=Res*10+ch-'0',ch=getchar();
	return Res;
}
int main()
{
	N=read();K=read();Num=N;int now=1;
	for (int i=1;i<=N;i++) A[i]=read();
	sort(A+1,A+1+N);A[0]=-1e9;
	for (int i=2;i<=N;i++){
		if (A[i]==A[i-1]) now++;
		else{
			if (A[i]>A[i-1]&&A[i]<=A[i-1]+K) Num-=now;
			now=1;
		}
	}
	printf("%d\n",Num);
	return 0;
}