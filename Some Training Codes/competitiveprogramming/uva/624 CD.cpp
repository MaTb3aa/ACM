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

int sum, n;
vector<int>v;
int solve(int i = 0, int rem = sum) {
	if (rem < 0)	return -OO;
	if (i == n)	return 0;

	int ret = solve(i + 1, rem);
	ret = max(ret, solve(i + 1, rem - v[i]) + v[i]);
	return ret;
}


void print(int i = 0, int rem = sum) {
	if (i == n)	return;
	int ret = solve(i, rem);
	if (ret == solve(i + 1, rem - v[i]) + v[i]) {
		cout << v[i] << " ";
		print(i + 1, rem - v[i]);
		return;
	}
	print(i + 1, rem);
}



int main() {
	file();
	while (cin >> sum >> n) {
		v.resize(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		print(); cout << "sum:" << solve();
		cout << endl;
	}

	return 0;

}