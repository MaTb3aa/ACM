//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include<unordered_map>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <stack>
#include <string>
#include <iomanip>
#include <queue>
#include <deque>
#include <cstring>
#include <limits>
#include <sstream>
#include <stdio.h>
#include <string>
#include <math.h>
#define endl                         '\n'	
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
vector<int>BFS(int s, vector<vector<int>>adj) {
	vector<int>len(adj.size(), OO);
	queue<pair<int, int>>q;
	q.push({ s,0 });
	len[s] = 0;
	int cur, dep;
	while (!q.empty()) {
		pair<int, int>p = q.front();
		q.pop();
		cur = p.first; dep = p.second;
		for (int i = 0; i < adj[cur].size(); i++)
			if (len[adj[cur][i]] == OO) {
				cout << dep << endl;
			q.push({adj[cur][i],dep + 1 });
			len[adj[cur][i]] = dep + 1;
		}
	}
	return len;
	//cur have max dep 
}
int main() {
	file();
	int n, e;
	cin >> n >> e;
	vector<vector<int>>v;
	v.resize(n);
	for (int i = 0; i < e; i++) {
		int x, y; cin >> x >> y;
		--x; --y;
		v[x].push_back(y);
	}
	vector<int>vv=BFS(0, v);
	for (auto t : vv)cout << t << endl;


	return 0;

}
/*

12 11
1 2
1 3
1 4
4 7
4 8
7 11
7 12
2 5
2 6
5 9
5 10


*/