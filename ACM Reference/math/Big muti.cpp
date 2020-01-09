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
ll a[30000000];
string mutli(ll n,ll md) {
	memset(a, 0,sizeof a);
	a[1] = 1;
	int len = 2;
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i < len; i++)a[i] *= md;
		for (int i = 1; i < len; i++) {
			if (a[i] >= 10)
				a[i + 1] += a[i] / 10, a[i] %= 10;
		}
		while (a[len])
			if (a[len++] >= 10)
				a[len] += a[len - 1] / 10, a[len - 1] %= 10;
	}
	string s="";
	for (int i = 1; i < len; i++) {
		s += (a[i] + '0');
	}
	reverse(all(s));
	return s;
}
bool ok(string a, string b) {
	if(a.size()>b.size())return 0;
	if (b.size() > a.size())return 1;
	for (int i = 0; i <b.size(); i++) {
		if (a[i]> b[i])  return 0;
		else if (a[i] < b[i]) return 1;
		
	}
	return 1;
}
int main()
{
	file();
	ll n;
	string s; 
	while (cin >> n >> s) {
	
		ll st = 1, ed = 10000000, cur, md;
		while (st <= ed) {
			int md = st + ed >> 1;
			if (ok(s,mutli(n, md))) {
				cur = md;
				ed = md - 1;
			}
			else st = md + 1;
		}
		cout << cur << endl;
	}
	

	return 0;
}
