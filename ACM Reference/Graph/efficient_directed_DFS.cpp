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
vector<int>g[50005];
int vis[50005], child[50005], cnt[50005];
int DFS(int u) {
	vis[u] = 1;
	int v = child[u];
	int sum = 0;
	if (!vis[v])sum = DFS(v) + 1;
	vis[u] = 0;
	cnt[u] = sum;
	return sum;
}
int main() {
	file();
	int t,tt=1;
	/*
		what is the best par can find mx children ^^ 
	*/
	cin >> t;
	while (t--) {
		int n; cin >> n;
		mem(g, 0);
		for (int i = 0; i < n; i++) {
			int u, v; cin >> u >> v;
			child[u] = v;
			vis[u] = 0;
			cnt[u] = 0;
		}


		int ans = -1,mx=-1;
		mem(vis, 0);
		for (int i = 1; i <= n; i++) {
			if (cnt[i] == 0)DFS(i);
			if (cnt[i] > mx) {
				mx = cnt[i];
				ans = i;
			}
		}
		printf("Case %d: %d\n", tt++, ans);
	
	}

	return 0;
}
/*
3
3
1 2
2 3
3 1
4
1 2
2 1
4 3
3 2
5
1 2
2 1
5 3
3 4
4 5


Case 1: 1
Case 2: 4
Case 3: 3



*/
