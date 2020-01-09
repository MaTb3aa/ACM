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
bool vis[N];
int n;
vector<vector<int>>g;
void DFS(int u, int v) {
	vis[u] = 1;
	cout << u << " " << v << endl;
	for (auto t : g[u]) {
		if (!vis[t])DFS(t, u);
	}
	
}
int timer, start[N], finish[N],cycle,forwardd,cross;
void Edge_classification(int u) {
	start[u] = timer++;
	for (auto t : g[u]) {
		if (start[t] == -1)
			Edge_classification(t);
		else {
			if (finish[t] == -1)cycle = 1;
			else if (start[t] < finish[t])forwardd = 1;
			else cross = 1;
		}
	}
	finish[u] = timer++;
}

int main() {
	file();
	int n; cin >> n;
	g.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int ch1, ch2;
		cin >> ch1 >> ch2;
		--ch1; --ch2;
		g[ch1].push_back(ch2 );
		//g[ch2].push_back(ch1 );
	}
	mem(start, -1);
	mem(finish, -1);
	Edge_classification(0);
	cout << cycle << endl;

	return 0;
}
/*
8
1 2
2 3
3 4
4 2
1 5
5 6
6 7
6 8


*/
