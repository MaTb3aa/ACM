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
set<vector<int>>ans;
int solve(int i ,int cur,vector<int>vv) {
	if (i == n) {
		if (cur == sum) {ans.insert(vv);return 0;}
		else return -OO;
	}
	int leave = solve(i + 1, cur,vv);
	int take = 0;
	if (cur + v[i] <= sum) {
		vv.push_back(v[i]);
		take = solve(i + 1, cur + v[i], vv)+v[i];
		
	}
	return max(leave, take);
	
}


int main() {
	file();
	
	while (cin >> sum>>n && n && sum) {
		v.resize(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		cout << "Sums of " << sum << ":\n";
		vector<int>vv;
		ans.clear();
		solve(0, 0, vv);
		bool ok = 0;
		vector<vector<int>>fans;
		for (auto t : ans) fans.push_back(t);
		reverse(all(fans));
		for (auto t : fans) {
			for (int i = 0; i < t.size(); i++) {
				ok = 1;
				if (i == t.size() - 1)cout << t[i] << endl;
				else cout << t[i] << "+";
			}
		}
		if (!ok)cout << "NONE\n";
		
	}
	return 0;

}