#include <bits/stdc++.h>
// if the number is not in order || big & small num ??!;
using namespace std;
bool vis[100];
vector<int> adj[100];
set<int> st;
int n;

void DFS(int node) {
	vis[node] = 1;
	for (int i = 0; i < adj[node].size(); i++) {
		if (vis[adj[node][i]] == 0)
			DFS(adj[node][i]);
	}
}

int connect() {
	int ctr = 0;

	for (int i = 0; i < 9; i++) {
		if (!vis[i]) {
			DFS(i);
			ctr++;
		}

	}
	return ctr;
}

int main() {
	memset(vis, 0, sizeof vis);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cout << connect();
	return 0;
}


