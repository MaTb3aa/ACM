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
vector<int>vis,ans;
int cycle = 0;
void DFS(int u,int p) {
	if (vis[u]) { cycle = 1; return; }
	vis[u] = 1;
	for (int i = 0; i < g[u].size(); i++) {
		if (g[u][i]!=p)DFS(g[u][i],u);
	}
} 
int main() {
	file();
	int n,e;
	cin >> n>>e;
	g.resize(n);
	vis.resize(n);
	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for (int i = 0; i < n; i++) {
		if(!vis[i])DFS(i,-1);
	}
	cout << cycle << endl;
	

}