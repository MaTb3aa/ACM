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
const int N = 3e5 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define all(v) ((v).begin()), ((v).end())
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
int Sum(int x,int y){
	--x;
	return y*(y+1)/2-(x*(x+1)/2);
}
int sum_even(int x,int y){
	if(x&1)x++;
	y/=2;
	x/=2;
	return Sum(x,y)*2;
}
int main()
{

	fast
	int t,a,b,ctr=1;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int ans=Sum(a,b)-sum_even(a,b);
		printf("Case %d: %d\n",ctr++,ans);
	}



     return 0;
}

