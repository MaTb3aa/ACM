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
#include <math.h>
#define P(x)     cout<<"\n\n*****"<<x<<"****\n\n";
#define RT(x)    return cout<<x,0;
const int N = 1.5 * 10000000 + 16, M = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
const double PI = 3.14159265358979323846;
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
bool solve(int idx, ll sum) {
	if (idx == 5)return sum == 23;

	if (solve(idx + 1, sum + v[idx]) || solve(idx + 1, sum - v[idx]) || solve(idx + 1, sum * v[idx]))return 1;
	return 0;
}
int main() {
	file();

	while (1) {
		v.clear();
		for (int i = 0; i < 5; i++) {
			int x; cin >> x;
			v.push_back(x);
		}
		if (!v[0])return 0;
		sort(all(v));
		bool ok = 0;
		do {
			ok = solve(1, v[0]);
			if (ok)break;

		} while (next_permutation(all(v)));

		if (ok)cout << "Possible\n";
		else cout << "Impossible\n";
	}
	
		return 0;
		
}
