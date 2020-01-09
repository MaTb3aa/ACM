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
bool ok(int md) {
	int ctr = md;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] - v[i - 1] > ctr)return 0;
		else if (v[i] - v[i - 1] == ctr)ctr--;
	}
	return 1;
}
int main() {
	file();	
	int t;
	cin >> t;
	int tt = 1;
	while (t--) {
		int n; cin >> n;
		v.clear(); v.push_back(0);
		cout << "Case " << tt++ << ": ";
		for (int i = 0; i < n; i++) {
			int x; cin >> x; v.push_back(x);
		}
		int st = 0, ed = 1e9, cur, md;
		while (st <= ed) {
			md = st + ed >> 1;
			if (ok(md)) {
				ed = md - 1;
				cur = md;
			}
			else st = md + 1;
		}
		cout << cur << endl;

	}

}


