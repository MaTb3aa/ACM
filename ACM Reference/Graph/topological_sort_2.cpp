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
#define watch(x) cout<<(#x)<<" = "<<x<<endl
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const double PI = acos(-1), EPS = 1e-7;
const int OO = 0x3f3f3f3f, N = 1e7 + 5, mod = 1e9 + 7;
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
// explane v .resize();

vector<vector<int>>g;
int vis[N];
vector<int>topo2;
void DFS(int u) {
	vis[u] = 1;
	for (auto t : g[u]) {
		if (!vis[t])DFS(t);
	}
	topo2.push_back(u);
}
int in[N];
int main() {
	file();
	int n, m;
	cin >> n >> m;
	g.resize(n);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		--x;--y;
		g[x].push_back(y);
		in[y]++;
	}
	vector<int>ready,topo;
	for (int i = 0; i < n; i++)
		if (!in[i])ready.push_back(i);
	while (!ready.empty()){
		int cur = ready.back();
		ready.pop_back();
		topo.push_back(cur);
		for (auto t : g[cur]) {
			in[t]--;
			if (in[t] == 0)ready.push_back(t);
		}
	}
	for (auto t : topo)cout << t+1 << " ";
	for(int i=0;i<n;i++)
		if(!vis[i])DFS(i);
	cout << endl; reverse(all(topo2));
	for (auto t : topo2)cout << t+1 << " ";


	


}
/*
5 5
1 2
2 3
4 2
4 5
2 5
*/