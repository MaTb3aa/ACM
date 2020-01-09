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


int vis[105][105];
char arr[105][105];
int cnt, n;
void DFS(int i,int j) {
	if (vis[i][j])return;
	if (i < 0 || j < 0 || i >= n || j >= n||arr[i][j]=='.')return;
	vis[i][j] = 1;
	DFS(i +1, j);
	DFS(i , j+1);
	DFS(i -1, j);
	DFS(i , j-1);
}
int main() {
	file();
	int t,tt=1;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)cin >> arr[i][j];

		cnt = 0;
		mem(vis, 0);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 'x' && !vis[i][j]) {
					cnt++;
					DFS(i, j);
				}
			}
		printf("Case %d: %d\n", tt++, cnt);
	}

	return 0;
}
