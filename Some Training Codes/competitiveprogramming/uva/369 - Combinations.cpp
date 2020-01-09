#include<bits/stdc++.h>
using namespace std;
int dp[105][105];
long long nCr(int n,int r){
	if(!r||n==r)return 1;
	int &ret=dp[n][r];
	if(~ret)return ret;
	return ret=nCr(n-1,r-1)+nCr(n-1,r);
}
int main(){
	int n,r;
	memset(dp,-1,sizeof dp);
	while(cin>>n>>r && n && r)
		printf("%d things taken %d at a time is %ld exactly\n",n ,r,nCr(n,r));
}

