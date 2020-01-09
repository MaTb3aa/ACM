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
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };


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
vector<vector<int>>g;
int vis[1000];
void DFS(int u) {
	for (auto t : g[u])
		if (!vis[t]) {
			vis[t]=1;DFS(t);
		}
}
int main() {
	file();
	int n;
	while (cin >> n && n) {
		g.clear();g.resize(n);
		bool ok = 0;
		for (int i = 0; i < n; i++) {
			int x, y; cin >> x;
			if (!x) {ok = 1; break;}
			--x;
			while (cin >> y && y) {
				--y; g[x].push_back(y);
			}
		}
		int q; 
		if(!ok)cin >> q;
		cin >> q;
		for (int i = 0; i < q; i++) {
			int x; cin >> x; --x;
			mem(vis, 0);DFS(x);
			vector<int>v;

			for (int j = 0; j < n; j++) 
				if (!vis[j]) v.push_back(j);	
			if (v.empty())cout << 0;
			else cout << v.size() <<" ";
			for (int j = 0; j < v.size(); j++) {
				if (j == v.size() - 1)cout << v[j]+1;
				else cout << v[j]+1 << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
