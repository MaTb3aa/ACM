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
int arr[100][100];
int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;mem(arr, 0);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)cin >> arr[i][j];
		
		bool ok = 1;
		map<pair<int, int>, int>mp;
		for (int j = 0; j < m; j++) {
			int cnt = 0,x=-1,y=-1;
			for (int i = 0; i < n; i++) {
				if (arr[i][j]) {
					cnt++;
					if (x == -1)x = i;
					else y = i;
				}
			}
			if (cnt != 2) { ok = 0; }
			else {
				if (mp.find({ x,y }) != mp.end())ok = 0;
				mp[{x, y}] = 1;
			}
		}
		
		if (ok)cout << "Yes\n";
		else cout << "No\n";
	}
	

	return 0;
}

