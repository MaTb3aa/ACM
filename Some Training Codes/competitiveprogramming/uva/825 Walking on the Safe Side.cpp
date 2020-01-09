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
int dx[] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int dy[] = { 1, 0, -1, 0, -1, 1, 1, -1 };
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

int arr[100][100];
int n, m;
int cnt = 0;
bool valid(int x, int y) {
	return (x >= 0 && y >= 0 && x < n && y < m && !arr[x][y]);
}
int solve(int idx,int jdx) {
	if (!valid(idx, jdx))return 0;

	if (idx == n - 1 && jdx == m - 1) {
		  cnt++; return 1;
	}

	return max(solve(idx + 1, jdx), solve(idx, jdx + 1));
	
}
int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		mem(arr, 0);
		cin.ignore();
		cnt = 0;
		for (int i = 0; i < n; i++) {
			string s; getline(cin, s);
			stringstream ss; ss << s;
			if (s.size() > 1) {
				int x, y; ss >> x;
				while (ss >> y)arr[x-1][y-1] = 1;
			}
		}
		solve(0, 0);
		cout << cnt << endl;
		if (t > 0)cout << endl;

	}
	return 0;

}

