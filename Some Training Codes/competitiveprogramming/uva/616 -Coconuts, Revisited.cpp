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
#include<unordered_map>
#include <string>
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 1e5 + 2 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int dxx[] = { -1, 1,-1, 1,-2,-2,2, 2 };
int dyy[] = { -2, -2, 2, 2,1,-1,1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first

ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x*y) / gcd(x, y)); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
bool ok(int p, int x) {
	for (int i = 1; i <= p; i++) {
		x--;
		if (x%p != 0)return 0;
		x -= x / p;
		if (x <= 0)return 0;
	}
	if (x%p == 0)return 1;
	else return 0;
}
int main() {
	file();
	int x;
	while (cin >> x) {
		if (x < 0)return 0;
		int mx = -1;
		for (int i = 1; i <= 100; i++) {
			if (ok(i, x)) {
				mx = max(mx, i);
			}
		}
		if (x == 3)
			printf("3 coconuts, 2 people and 1 monkey\n");
		else if (mx != -1)
			printf("%d coconuts, %d people and 1 monkey\n", x, mx);
		else
			printf("%d coconuts, no solution\n", x);
	}
	return 0;
}