#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
using namespace std;
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define endl '\n'
#define sz(v) (int)v.size()
#define ndl puts("")
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9 + 7 , N=1e5+7;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };


void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}
vector<vector<int>>g;
vector<int>idx, low,S;
int compID[N], comp, vis[N],T;
void DFS(int u) {
	idx[u] = low[u] = ++T;
	S.push_back(u);
	vis[u] = 1;
	for (int i = 0; i < g[u].size(); i++) {
		int v = g[u][i];
		if (idx[v] == 0)DFS(v);
		if (vis[v])
			low[u] = min(low[u], low[v]);
	}
	if (low[u]==idx[u]) {
		while (1) {
			int v = S.back(); S.pop_back();
			compID[v] = comp;
			vis[v] = 0;
			if (v == u)break;
		}
		++comp;
	}
	
}
// #directed Strongly connected compontent
int main() {
	file();
	int n, e; cin >> n >> e;
	g.resize(n);
	idx.resize(n);
	low.resize(n);

	for (int i = 0; i < e; i++) {
		int a, b; cin >> a >> b;
		--a; --b;
		g[a].push_back(b);
	}
	for (int i = 0; i < n; i++) {
		if (idx[i] == 0)DFS(i);
	}
	// output 
	for (int i = 0; i < comp; i++) {
		for (int j = 0; j < n; j++) {
			if (compID[j] == i)cout << j+ 1 << " ";
		}
		cout << endl;
	}

	

}