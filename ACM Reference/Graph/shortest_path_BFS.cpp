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

//bool operator < (const edge & e) const {
//	return w > e.w // sort smaller waight 
//}
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
vector<int> BFS(int s, int d, vector< vector<int> > g){
	queue<int>q;
	vector<int>path, len(sz(g), OO), vis(sz(g),0), par(sz(g), -1);
	q.push(s);  len[s] = 0;
	int cur = s, dep = 0, sz = 1;
	bool ok = 1;
	for (; !q.empty() && ok; dep++, sz = q.size()) {
		while (sz-- &&  ok) {
			cur = q.front(); q.pop();
			for (auto t : g[cur]) {
				if (len[t] == OO) {
					q.push(t); len[t] = dep+1; par[t] = cur;
					if (t == d) {
						ok = 0; break;
					}
				}
			}
		}
	}
	while (d != -1) {
		path.push_back(d);
		d = par[d];
	}
	reverse(all(path));
	return path;
}
int main() {
	file();
	vector<vector<int>>g;
	int n, e;
	cin >> n >> e;
	g.resize(n);
	for (int i = 0; i < e; i++) {
		int x, y; cin >> x >> y;
		g[x-1].push_back(y-1);
		g[y - 1].push_back(x - 1);
	}
	
	vector<int>path=BFS(9, 11,g);

	for (auto t :path )cout << t+1 << " ";
	return 0;
}

/*

12 11
1 2
1 3 
1 4
2 5 
2 6
5 9
5 10
4 7 
4 8
7 11
7 12

*/
