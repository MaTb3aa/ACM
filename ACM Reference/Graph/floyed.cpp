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

ll arr[105][105];
int n, m, f;
bool vis[105];
vector<int>frinds; 
ll mn;
void floyed(int n) {
for (int i = 1; i <= n; i++)arr[i][i] = 0;
for (int k = 1; k <= n; k++)for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++)
	if (arr[i][k] < OO && arr[k][j] < OO)
		arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
}
void solve(int idx, int lst, ll sum) {
	if (idx == f) {
		sum += arr[lst][n];
		mn = min(mn, sum);
		return;
	}
	for (int i = 0; i < f; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			solve(idx + 1, frinds[i], sum + arr[lst][frinds[i]]);
			vis[i] = 0;
		}
	}
}
int main() {
	file();
	int t = 1;
	int tt; cin >> tt;
	while (tt--) {
		cout << "Case " << t++ << ": ";
		mem(vis, 0);
		cin >> n >> m >> f;
		for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++)
			arr[i][j] = OO;

		for (int i = 0; i < m; i++) {
			ll x, y, z; cin >> x >> y >> z;
			arr[x][y] = arr[y][x] = min(z, arr[x][y]);
		}
		floyed(n);
		frinds.clear();
		frinds.resize(f);mn = OO;
		for (int i = 0; i < f; i++)cin >> frinds[i];
		solve(0, 1, 0);
		cout << mn << endl;

	}
}