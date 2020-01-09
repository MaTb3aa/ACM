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

vector<vector<int>>g;
int cnt[2];
int color[N];
bool bad;
void DFS(int u, int col) {
	cnt[col]++;
	color[u] = col;
	for (auto t : g[u]) {
		if (color[t] == -1)DFS(t, !col);
		if (color[u] == color[t])bad = 1;
		
	}
}
// check if it is a bipartite graph ?! 
int main() {
	file();
	int n, m;
	cin >> n >> m;
	g.resize(n);
	forr(i, m) {
		int x, y; cin >> x >> y;
		--x; --y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	mem(color, -1);
	forr(i, n) {
		if (~color[i])continue;
		bad = 0;
		cnt[0] = cnt[1] = 0;
		DFS(i, 0);
		if (bad) {
			//is not bipartite
			RT(0);
		}
	}
	cout << cnt[0] << " " << cnt[1] << endl;
	cout << "wow\n";

	return 0;


}