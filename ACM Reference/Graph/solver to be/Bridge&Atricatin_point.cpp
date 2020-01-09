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
//const int MOD = 1e9 + 7;
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
vector<int>idx,low;
vector<bool>art;
vector<pair<int, int>>bridge;
int DFStime,child;
// case 1 if i have node idx[v]==0 i go to it 
// case 2 it will be parent
// case 3 v != p && it vis ---> so it is back_edge
void DFS(int u, int p) {
	low[u] = idx[u] = ++DFStime;
	for (int i = 0; i < g[u].size(); i++) {
		int v = g[u][i];//child
		if (idx[v] == 0) {
			DFS(v, u);
			low[u] = min(low[u], low[v]);
			if (p == -1)++child;
			// if i have child can reach to any node so i can reach to this node ^^
			if (low[v] > idx[u]) {
				bridge.push_back({ u,v });
			}
			// cut poit 
			if (low[u] >= idx[u]) {
				art[u] = 1;
			}
		}
		//back edge 
		else if (v != p) {
			low[u] = min(idx[v], low[u]); 
		}
	}
}
int main() {
	file();
	int n,e;
	cin >> n>>e;
	g.resize(n);
	low.resize(n);
	idx.resize(n);
	art.resize(n);

	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);

	}
	DFS(0, -1);
	art[0] = child > 1;//handling point 
	for (int i = 0; i < bridge.size(); i++)
		cout << bridge[i].first+1 << " " << bridge[i].second+1 << endl;
	for (int i = 0; i < art.size(); i++)
		if (art[i])cout << i + 1 << endl;
		

	

}