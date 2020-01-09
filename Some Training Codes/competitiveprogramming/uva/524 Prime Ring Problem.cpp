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
bool Isprime(int x) {
	if (x < 2)return 0;
	for (int i = 2; i*i <= x; i++)
		if (x%i == 0)return 0;
	return 1;
}
vector<vector<int>>vv;
bool vis[10001];
void solve(int idx, vector<int>v) {
	if (idx == n-1) {
		if (Isprime(1 + v.back())) {
			vv.push_back(v);
		}
		return;
	}

	for (int i = 2; i <= n; i++) {
		if (!vis[i] && Isprime(i + v.back())) {
			vis[i] = 1;
			v.push_back(i);
			solve(idx + 1,v);
			vis[i] = 0;
			v.pop_back();
		}
	}
	return;
}
int main() {
	file();
	int t = 1;
	while (cin >> n) {
		if(t>1)cout << endl;
		cout << "Case " << t++ << ":\n";
		vector<int>v; v.push_back(1);
		solve(0, v);
		for (auto t : vv) {
			if (t.size() == n) {
				for (int i = 0; i < t.size(); i++) {
					if (i != n - 1)cout << t[i] << " ";
					else cout << t[i] << endl;
				}
			}
		}
	}
	return 0;

}