//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include<unordered_map>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <stack>
#include <string>
#include <iomanip>
#include <queue>
#include <deque>
#include <cstring>
#include <limits>
#include <sstream>
#include <stdio.h>
#include <string>
#include <math.h>
#define endl                         '\n'	
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
int arr[9][9];
int vis[9], d1[2 * 8 + 1], d2[2 * 8 + 1];
vector < pair<int, int>>v;
int mx = 0;
int cnt = 0;
void solve(int r) {
	if (r == 8) {
		int cur = 0;
		for (int i = 0; i < v.size(); i++) {
			cur += arr[v[i].first][v[i].second];
		}
		mx = max(mx, cur);
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (!vis[i] && !d1[i + r] && !d2[8 + i - r]) {
			vis[i] = d1[i + r] = d2[8 + i - r] = 1;
			v.push_back({ r,i });
			solve(r + 1);
			vis[i] = d1[i + r] = d2[8 + i - r] = 0;
			v.pop_back();
		}
	}
}
int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 8; i++)for (int j = 0; j < 8; j++)cin >> arr[i][j];
		mx = 0;
		solve(0);
		cout << setw(5);
		cout << mx << endl;
	}
	return 0;

}