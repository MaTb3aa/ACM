//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 2e4 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define all(v) ((v).begin()), ((v).end())
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
int arr[25];
int length(ll n){
	int ctr=0;
	if(n==1)return 3;
	while(1){
			ctr++;
			if(n==1)break;
			if(n&1)n=3*n+1;
			else n/=2;
		}
	return ctr-1;
}
int main()
{
	fast
	int x,y,mx;
	while(cin>>x>>y&&x!=0&&y!=0){
		mx=-1;
		int num,ans;
		if(x>y){swap(x,y);}
		for(ll i=x;i<=y;i++){
			ans=length(i);
			if(ans>mx){mx=ans;num=i;}
		}
		 printf("Between %d and %d, %d generates the longest sequence of %d values.\n",x,y,num,mx);
	}
     return 0;
}


