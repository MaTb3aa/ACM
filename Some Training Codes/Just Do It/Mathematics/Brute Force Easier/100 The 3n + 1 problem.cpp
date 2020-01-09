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
int length(int n){
	int ctr=0;
	while(1){
			ctr++;
			if(n==1)break;
			if(n&1)n=3*n+1;
			else n/=2;
		}
	return ctr;
}
int main()
{
	fast
	int x,y,mx;
	while(cin>>x>>y&&x&&y){
		mx=-1;
		int f=0;
		if(x>y){f=1;swap(x,y);}
		for(int i=x;i<=y;i++){
			mx=max(length(i),mx);
		}
		if(f)cout<<y<<" "<<x<<" "<<mx<<endl;
		else cout<<x<<" "<<y<<" "<<mx<<endl;
	}
     return 0;
}


