//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define endl                         '\n'	
#define Ceil(x,y)             ((x+y-1)/y)
#define sz(s)               (int)s.size()
#define RT(x)           return cout<<x,0;
#define mem(x,y)    memset(x,y,sizeof(x))
#define all(v) ((v).begin()), ((v).end())
#define vi                    vector<int>
#define pii                 pair<int,int>
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int ddx[] = { -1,0,1 };
const double pi = acos(-1), eps = 1e-9;
const int OO = 0x3f3f3f3f, N = 1e6 + 5, mod = 1e9 + 7;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int n, k;
vector<int>v;
int Mod(int x) {
	return ((x%k) + k) % k;
}
int dp[10005][105];
bool solve(int i,int m) {
	if (i == n) {
		return m  == 0;
	}
	if (~dp[i][m])return dp[i][m];
	bool ret = 0;
	ret = solve(i + 1, Mod(m + v[i]));
	ret = max(ret, solve(i + 1, Mod(m - v[i])));
	return dp[i][m]=ret;
}
int main() { 
	file();
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		v.clear();
		v.resize(n);
		mem(dp, -1);
		forr(i, n)cin >> v[i];
		if(solve(1, v[0]%k))cout<<"Divisible" << endl;
		else cout << "Not divisible\n";
	}



	return 0;

}