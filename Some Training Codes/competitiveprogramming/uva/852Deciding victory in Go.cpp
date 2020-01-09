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
vector<string>v;
bool vis[90][90];
bool valid(int x, int y) {
	return (x >= 0 && y >= 0 && x < 9 && y < 9);
}
bool safe(int x, int y,char ch) {
	for (int i = 0; i < 4; i++) {
		int ddx = dx[i] + x;
		int ddy = dy[i] + y;
		if (valid(ddx, ddy) && v[ddx][ddy] != '.' && v[ddx][ddy] != ch)return 0;
	}
	return 1;
}
ll ans = 0;
bool ok = 1;
bool take = 0;
bool BFS(int x, int y,int ch) {
	ans = 0; ok = 1;
	take = 0;
	vis[x][y] = 1;
	queue<pair<int, int>>q;
	q.push({ x,y });
	ans++;
	while (!q.empty()) {
		pair<int, int>p = q.front(); q.pop();
		if (!safe(p.first, p.second,ch))ok = 0;
		if (v[p.first][p.second] == ch)take = 1;
		for (int i = 0; i < 4; i++) {
			int ddx = dx[i] + p.first;
			int ddy = dy[i] + p.second;
			if (valid(ddx, ddy) && v[ddx][ddy] == '.' && !vis[ddx][ddy]) {
				vis[ddx][ddy] = 1;
				ans++;
				q.push({ ddx,ddy });
			}
		}
	}
	return ok;
}
int main() {
	file();
	int t; cin >> t;
	while (t--) {
		string s; v.clear();
		for (int i = 0; i < 9; i++) {
			cin >> s;
			v.push_back(s);
		}
		
		ll white = 0, black = 0;
		mem(vis, 0);
		for(int i=0;i<9;i++)
			for (int j = 0; j < 9; j++) {
				if (v[i][j] == 'X') {
					black++;
					for (int k = 0; k < 4; k++) {
						int ddx = dx[k] + i;
						int ddy = dy[k] + j;
						if (valid(ddx,ddy)&&!vis[ddx][ddy] && v[ddx][ddy] == '.') {
							if (BFS(ddx, ddy, 'X'))black += ans;
						}
					}
				}
			}
		mem(vis, 0);
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++) {
				if (v[i][j] == 'O') {
					white++;
					for (int k = 0; k < 4; k++) {
						int ddx = dx[k] + i;
						int ddy = dy[k] + j;
						if (valid(ddx, ddy) && !vis[ddx][ddy] && v[ddx][ddy] == '.') {
							if (BFS(ddx, ddy, 'O'))white += ans;
						}
					}
				}
			}
	
		printf("Black %d White %d\n", black, white);
	}
	
	
	
	


	return 0;
}
/*

1
OX..XXO..
OXX.XOO..
OOXX.XO.O
.OOX.XOO.
..OOXXXOO
..OO.X.XO
..OOXX.XX
..OX.X...
..OXX....

Black 39 White 41


*/
