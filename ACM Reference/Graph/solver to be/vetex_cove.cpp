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
const int MOD = 1e9 + 7;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };


void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}
int res = 0;
vector<vector<int>>g;
vector<int>v;
bool DFS(int u, int p) {
	bool black = 0;
	for (int i = 0; i < g[u].size(); i++) {
		if (g[u][i] != p) {
			bool cur = DFS(g[u][i], u);
			if (cur)
				black = 1;
		}
	}
	if (black) { ++res; v.push_back(u); }
	return !black;
}
int main() {
	file();
	int n;
	cin >> n;
	g.resize(n);
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	DFS(0, -1);
	cout << res << endl;
	for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
	

}