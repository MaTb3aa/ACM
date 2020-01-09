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
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
double PI = 3.14159265359;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x*y) / gcd(x, y)); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
ll conv(string s) {
	ll ans = 0;
	int ctr = 0;
	for (int i = 0; i < s.size(); i++) {
		ans += (pow(2, ctr)*(s[i] - '0')); ctr++;
	}
	return ans;
}
int main() {
	file();
	ll n;
	while (cin >> n && n) {
		string s = "";
		while (n > 0) {
			if (n & 1)
				s += '1';
			else
				s += '0';
			n /= 2;
		}
		string a = "", b = "";
		bool f1 = 0, f2 = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1') {
				if (f1 == 0)a += '1';
				else a += '0';
				f1 = !f1;
				if (f2)b += '1';
				else b += '0';
				f2 = !f2;

			}
			else {
				a += '0';
				b += '0';
			}

		}
		ll aa = conv(a);
		ll bb = conv(b);
		cout << aa << " " << bb << endl;
	}
	
	
	
	

	



	
	return 0;
}