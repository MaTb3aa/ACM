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

vector<vector<int>>v;
vector<int>vis;
int par[100000];
int id;
void DFS(int u) {
	vis[u] = 1;
	par[u] = id;
	for(auto t : v[u]){
		if (!vis[t])DFS(t);
	}
}
int main() {
	file();
	int n, p;
	cin >> n >> p;
	v.resize(n);
	vis.resize(n);
	for (int i = 0; i < p; i++) {
		int x, y;
		cin >> x >> y;
		--x; --y;
		v[x].push_back(y);
		v[y].push_back(x);

	}
	mem(par, -1);
	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
			DFS(i); id++;
		}
	}
	int q;
	cin >> q;
	while (q--)
	{
		int x, y; cin >> x >> y;
		--x; --y;
		if (par[x] == par[y])cout << "YES\n";
		else cout << "NO\n";
	}

}