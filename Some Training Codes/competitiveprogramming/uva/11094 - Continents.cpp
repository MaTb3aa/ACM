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
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int n, m;
char arr[22][22];
int mx = 0;
int cnt = 0;
void DFS(int x, int y,char ch) {
	arr[x][y] = '*';
	cnt++;
	for (int i = 0; i < 4; i++) {
		int ddx = dx[i] + x;
		int ddy = dy[i] + y;
		ddy %= m;
		if (ddx < 0 || ddx >= n)continue;
		if (ddy < 0)ddy += m;
		if (ddy >= m)ddy %= m;
		if (arr[ddx][ddy] == ch) {
			DFS(ddx, ddy, ch);
		}
	}
}
int main() {
	file();
	while(cin >> n >> m) {
		mx = 0, cnt = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)cin >> arr[i][j];
		int x, y; cin >> x >> y;
		char ch = arr[x][y];
		DFS(x, y, ch);
	
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (arr[i][j] == ch) {
					cnt = 0;
					DFS(i, j, ch);
					mx = max(mx, cnt);
				}
		cout << mx << endl;
	}
	





}