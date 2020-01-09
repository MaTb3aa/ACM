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
int vis[100];
pair<int, int>mx;
void BFS(int u) {
	vis[u] = 1;
	int node = u, dep = 0;
	queue<pair<int, int>>q;
	q.push({ node,dep });
	while (!q.empty()) {
		pair<int, int>p = q.front();q.pop();
		if (p.second + 1 > mx.second) {
			mx.second = p.second;
			mx.first = p.first;
		}
		for (auto t : g[p.first])
			if (!vis[t]) {
				vis[t] = 1;
				q.push({ t,p.second+ 1 });
			}
	}
}
pair<int, int>mx2;
void DFS(int u, int p, int dep) {
	if (dep > mx2.second) {
		mx2.first = u;
		mx2.second = dep;
	}
	for (auto t : g[u]) {
		if (t != p)
			DFS(t, u, dep + 1);
	}
}

int main() {
	file();
	int n, v;
	cin >> n >> v;
	g.resize(n);
	for (int i = 0; i < v; i++) {
		int x, y; cin >> x >> y;
		--x; --y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	
	/*BFS(0);
	cout << mx.first << " " << mx.second << endl;
	memset(vis, 0, sizeof vis);
	mx.first = 0;
	BFS(mx.first);
	cout << mx.first << endl;*/

	/*DFS(0, -1, 0);
	cout << mx2.first << " " << mx2.second << endl;
	DFS(mx2.first, -1, 0);
	cout << mx2.first << " " << mx2.second << endl;*/
	
	
	


	return 0;
}
/*
7 6
2 1
2 6
2 7
1 3
3 4
3 5

5 2
3 4

*/