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
string treeCanoincalForm(int u, int p) {
	vector<string>children;
	for (int i = 0; i < g[u].size(); i++)
		if (g[u][i] != p)
			children.push_back(treeCanoincalForm(g[u][i], u));

	string nodRep = "(";
	sort(all(children));
	for (auto t : children) 
		nodRep += t;
	nodRep += ")";
	return nodRep;

}

int main() {
	file();
/*
 if u need to cmpare to tree 
*/
	int n, v;
	cin >> n >> v;
	g.resize(n);
	for (int i = 0; i < v; i++) {
		int x, y; cin >> x >> y;
		--x; --y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	cout<<treeCanoincalForm(1, -1);
	
	
	


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


(((()()))()())
*/