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

int n,m;
int i1, i2, d1, d2;
int test = 1;
vector<pair<int,int>>v;
int vis[100];
int ok = 0;
void solve(int idx,vector<pair<int,int>>vv) {
	if (idx == n) {
		if (vv.back().second == d1)ok++;
		return;
	}
	for (int i = 0; i < m; i++) {
		if (vis[i]!=test &&(v[i].first==vv.back().second ||v[i].second==vv.back().second)) {
			vis[i]=test;
			if(v[i].first == vv.back().second)vv.push_back(v[i]);
			else vv.push_back({ v[i].second,v[i].first });
			solve(idx + 1, vv);
			vis[i] = 0;
			vv.pop_back();
		}
	}
	
}
int main() {
	file();
	while (cin >> n && n) {
		cin >> m;
		test++;
		cin >> i1 >> i2 >> d1 >> d2;
		v.resize(m);
		for (int i = 0; i < m; i++)cin >> v[i].first >> v[i].second;
		vector<pair<int, int>>vv;
		vv.push_back({ i1,i2 });
		ok = 0;
		solve(0, vv);
		if (ok)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;

}

