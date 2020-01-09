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

int t, n;
int dp[105][50007];
vector<int>v;
int solve(int i, int rem) {
	if (i == n) {
		if (rem < 0)return -OO;
		return 0;
	}
	int &ret = dp[i][rem];
	if (~ret)return ret;
	ret = solve(i + 1, rem);
	ret = max(ret, solve(i + 1, rem - v[i]) + v[i]);
	return ret;
}
int main() { 
	file();
	cin >> t;
	while (t--) {
		cin >> n;
		mem(dp, -1);
		v.resize(n);ll sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i]; sum += v[i];
		}
		int first = solve(0, sum / 2);
		int sec = sum - first;
		cout << sec - first << endl;
	}



	return 0;

}