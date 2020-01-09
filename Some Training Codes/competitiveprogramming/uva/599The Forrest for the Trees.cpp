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
vector<vector<int>>g;
 
 
int vis[100],cnt;
void DFS(int u) {
	vis[u] = 1;
	cnt++;
	for (auto t : g[u])
		if (!vis[t])DFS(t);
}
int main() {
	file();
	int t; cin >> t;
	while (t--) {
		g.clear();
		vector<string>v;
		string s;
		map<char, int>mp;
		int vert = 0;
		while (cin >> s) {
			if (s.find('*') != string::npos)break;
			v.push_back(s);
			if (mp.find(s[1]) == mp.end())mp[s[1]] = vert++;
			if (mp.find(s[3]) == mp.end())mp[s[3]] = vert++;
		}
		cin >> s;
		for (auto t : s)if (mp.find(t) == mp.end())mp[t] = vert++;
		--vert;
		//cout << vert << " " << mp.size() << endl;
		g.resize(vert);
		for (auto t : v) {
			string d = t;
			g[mp[d[1]]].push_back(mp[d[3]]);
			g[mp[d[3]]].push_back(mp[d[1]]);
		}	
 
		int tree = 0, acorn = 0;
		mem(vis, 0);
		for (int i = 0; i < vert; i++) {
			if (!vis[i]) {
				cnt = 0;DFS(i);
				if (cnt > 1)tree++;
				else acorn++;
			}
		}
		if (v.empty() && s.size() && !acorn)acorn = s.size();
		printf("There are %d tree(s) and %d acorn(s).\n", tree, acorn);
 
	}
 
	return 0;
 
}
/*
 
3
******
 
(A,B)
(B,C)
(D,E)
(E,F)
(F,G)
(I,H)
(J,I)
(J,K)
(K,L)
(Q,R)
(S,R)
(T,S)
****************
A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T
(A,B)
(B,C)
(D,E)
(E,F)
(F,G)
(I,H)
(J,I)
(J,K)
(K,L)
(Q,R)
(S,R)
(T,S)
(M,M)
****************
A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T
 
 
fucken test ^^ 
There are 0 tree(s) and 1 acorn(s).
There are 4 tree(s) and 5 acorn(s).
There are 4 tree(s) and 4 acorn(s).
 
*/