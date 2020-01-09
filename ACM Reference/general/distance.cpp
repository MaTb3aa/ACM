#include <bits/stdc++.h>
// if the number is not in order || big & small num ??!;
// why when i take it from last num in tree the answer was not valid topoligical??
using namespace std;
bool vis[100];
vector<int> adj[100];

int n;

int dis[100];
int par[100];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	par[u] = -1;
	vis[u] = 1;
	dis[u] = 0;
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 0; i < adj[a].size(); i++) {
			if (!vis[adj[a][i]]) {
				vis[adj[a][i]] = 1;
				q.push(adj[a][i]);
				dis[adj[a][i]] = dis[a] + 1;
				par[adj[a][i]] = a;
			}
		}
	}
}

void print(int x) {
	if (par[x] != -1)
		print(par[x]);
	cout << x << " ";
}
int main() {
	memset(vis, 0, sizeof vis);
	memset(dis, 0x3f, sizeof dis);
	int nn;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		nn = x;
	}
	int aa, bb;
	cin >> aa >> bb;
	BFS(aa);
	print(bb);

	return 0;
}


