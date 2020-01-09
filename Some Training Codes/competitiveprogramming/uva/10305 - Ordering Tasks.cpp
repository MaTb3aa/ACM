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
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int main() {
	file();
	int n, m;
	while (cin >> n >> m, n != 0 || m != 0) {
		vector<vector<int>>g;
		vector<int>topo,in;
		g.resize(n);
		in.resize(n);
		queue<int>q;
		for (int i = 0; i < m; i++) {
			int x, y; cin >> x >> y;
			--x; --y;
			in[y]++;
			g[x].push_back(y);
		}
		for (int i = 0; i < n; i++) {
			if (!in[i])q.push(i);
		}
		while (!q.empty()) {
			int u = q.front(); q.pop();
			topo.push_back(u);
			for (int i = 0; i <g[u].size(); i++) {
				in[g[u][i]]--;
				if (!in[g[u][i]])q.push(g[u][i]);
			}
			}
		for (int i = 0; i < topo.size(); i++) {
			if (i) cout << ' ';
			cout << topo[i];
		}
		cout << endl;
	}
	return 0;
}