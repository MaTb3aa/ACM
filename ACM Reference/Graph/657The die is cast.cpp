//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<unordered_map>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define endl                         '\n'	
#define Ceil(x,y)             ((x+y-1)/y)
#define sz(s)               (int)s.size()
#define RT(x)           return cout<<x,0;
#define mem(x,y)    memset(x,y,sizeof(x))
#define all(v) ((v).begin()), ((v).end())
#define vi                    vector<int>
#define pii                 pair<int,int>
#define watch(x) cout<<(#x)<<" = "<<x<<endl
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const double PI = acos(-1), EPS = 1e-7;
const int OO = 0x3f3f3f3f, N = 1e7 + 5, mod = 1e9 + 7;
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
int vis[55][55];
int vis2[55][55];
char arr[55][55];
int n, m;
int cnt,cnt2;
bool valid(int x, int y) {
	return (x >= 0 && y >= 0 && x < n && y < m);
}
void DFS(int x, int y) {
	vis[x][y] = cnt;
	for (int i = 0; i < 4; i++) {
		int ddx = dx[i] + x;
		int ddy = dy[i] + y;
		if (valid(ddx, ddy) && !vis[ddx][ddy] && arr[ddx][ddy]!='.') {
			DFS(ddx, ddy);
		}
	}
}
void DFS2(int x, int y) {
	vis2[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int ddx = dx[i] + x;
		int ddy = dy[i] + y;
		if (valid(ddx, ddy) && !vis2[ddx][ddy] && arr[ddx][ddy] == 'X') {
			 DFS2(ddx, ddy);
		}
	}
}

int main() {
	file();
	int t = 1;
	while (cin >> n >> m && n && m) {
		cout << "Throw " << t++ << endl;
		cnt = cnt2 = 0;
		mem(vis, 0);mem(vis2, 0);
		swap(n, m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)cin >> arr[i][j];

		vector<int>v(10001),vv;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) 
				if (!vis[i][j] && arr[i][j] != '.') {
					cnt++;
					DFS(i, j);
				}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (!vis2[i][j] && arr[i][j] == 'X') {
					v[vis[i][j]]++;
					DFS2(i, j);
				}
			
		for (int i = 1; i <= cnt; i++)
			if (v[i])vv.push_back(v[i]);
		sort(all(vv));
		for (int i = 0; i < sz(vv) - 1; i++)cout << vv[i]<<" ";
		cout << vv.back() << endl;
		cout << endl;
	}

}