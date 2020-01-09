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
#define P(x)     cout<<"\n\n*****"<<x<<"****\n\n";
#define RT(x)    return cout<<x,0;
const int N = 1.5 * 10000000 + 16, M = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
const double PI = acos(-1.0);
using namespace std;
typedef long long ll;
typedef vector<bool> ve;
#define endl '\n'	
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
int merge(int l, int r, int md) {
	int i = l, j = md + 1;
	vector<int>vv;
	int cnt = 0;
	while (i <= md && j <= r) {
		if (v[i] < v[j]) vv.push_back(v[i++]);
		else {
			vv.push_back(v[j++]);
			cnt += (md - i-1);
		}
	}
	while (i <= md)vv.push_back(v[i++]);
	while (j <= r)vv.push_back(v[j++]);
	for (int i = r; i >= l; i--) {
		v[i] = vv.back();
		vv.pop_back();
	}
	return cnt;
}
int merge_sort(int l, int r) {
	int md = l + r >> 1;
	int inv = 0;
	if (r > l) {
		inv = merge_sort(l, md);
		inv += merge_sort(md + 1, r);
		inv += merge(l, r, md);
	}
	return inv;
}
int main() {
	file();	
	int n;
	while (cin >> n) {
		if (!n)return 0;
		v.resize(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		int x = merge_sort(0, n - 1);
		//cout << x << endl;
		if (x & 1)cout << "Marcelo\n";
		else cout << "Carlos\n";
	}

}


