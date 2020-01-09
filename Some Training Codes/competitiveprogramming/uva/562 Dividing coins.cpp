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
int n;
vector<int>v;
int dp[1007][50007];
int solve(int idx, int rem) {
	if (idx == n)return 0;
	if (~dp[idx][rem])return dp[idx][rem];
	int left = solve(idx + 1, rem);
	int right = 0;
	if (rem >= v[idx]) {
		right = solve(idx + 1, rem - v[idx]) + v[idx];
	}
	return dp[idx][rem] = max(left, right);
}
int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		v.resize(n);
		ll sum = 0;
		mem(dp, -1);
		for (int i = 0; i < n; i++) {
			cin >> v[i]; sum += v[i];
		}
		int sol = solve(0, sum / 2);
		cout <<  abs((sum-sol)-sol) << endl;

	}
	return 0;

}