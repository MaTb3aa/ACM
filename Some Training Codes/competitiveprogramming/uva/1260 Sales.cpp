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
const int OO = 0x3f3f3f3f, mod = 1e9 + 7;
const double PI = 3.14159265358979323846;
using namespace std;
typedef long long ll;
typedef vector<bool> ve;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }


void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

vector<int>v;
int n;
int LIS(int idx,int val) {
	if (idx == -1)return 0;
	int ret = 0;
	if (v[idx] <= val)ret=LIS(idx - 1, val) + 1;
	else ret = LIS(idx - 1, val);
	return ret;
}
int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		v.resize(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		ll sum = 0;
		for (int i = n-1; i>0; i--) {
			int cur=  LIS(i-1, v[i]);
			sum += cur;
		}
		cout << sum << endl;
	}
	return 0;
		
}

