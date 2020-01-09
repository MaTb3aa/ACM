//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 2*1e5 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f,mod=1e9+7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int dxx[] = { -1, 1,-1, 1,-2,-2,2, 2 };
int dyy[] = { -2, -2, 2, 2,1,-1,1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first

ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y);}
ll lcm(ll x, ll y) { return ((x*y) / gcd(x, y)); }

void file() {
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int main() {
	file();

	int t=2;
	double a,b,c,d,slope;cin>>a>>b;
	set<double>st;
	while(t--){
		cin>>c>>d;
		slope=(a-c)/(b-d);
		st.insert(slope);
		a=c;b=d;
	}
	st.insert(slope);
	if(st.size()==1)cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
