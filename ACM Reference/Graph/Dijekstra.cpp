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
int n;
vector<ll>cost;
vector<int>pre,vis;
vector < vector<pair<ll, int> > >adj;
void Dijkstra(int src) {
	priority_queue < pair<ll, int> , vector < pair<ll, int>>, greater<pair<ll, int> >>pr;
	int n = sz(adj);
	cost.resize(n, 1e18);
	pre.resize(n, -1);
	pr.push({ 0,src });
	cost[src] = 0;
	while (!pr.empty()) {
		pair<ll, int>top = pr.top(); pr.pop();
		for (int i = 0; i < sz(adj[top.second]); i++) {
			int v = adj[top.second][i].second; 
			ll Curcost = adj[top.second][i].first;
			if (cost[v] > top.first + Curcost) {
				cost[v] = top.first + Curcost;
				pre[v] = top.second;
				pr.push({ Curcost,v });
			}
		}
	}
}
int main() {
	file();
	cin >> n;
	adj.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b, c; cin >> a >> b >> c;
		--a; --b;
		adj[a].push_back({ c,b });
		adj[b].push_back({ c,a });
	}
	Dijkstra(0);
	for (int i = 0; i < n; i++) {
		cout << i+1 << " " << pre[i]+1 << " " << cost[i] << endl;
	}
	/*
	
	5
1 2 2
1 6 10
1 3 3
3 4 4
3 5 5

	*/
	
	return 0;
}