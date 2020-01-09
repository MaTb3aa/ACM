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
#include <numeric>
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

int main() {
	file();
	int n;
	while (cin >> n) {
		vector<ll>v(1 << n);
		for (int i = 0; i < 1 << n; i++)cin >> v[i];
		vector<ll>cpy(1 << n);
		for (int i = 0; i < 1 << n; i++) {
			int cur = 0;
			for (int j = 0; j < n; j++) 
				cur += v[i ^ (1 << j)];
			cpy[i] = cur;
			
		}
		ll mx = 0;
		for (int i = 0; i < 1 << n; i++)
			for (int j = 0; j < n; j++)
				mx = max(mx, cpy[i] + cpy[i ^ (1 << j)]);
		cout << mx << endl;
		
	}
}

/*
	Potency of the corner is the sum of weights of all neighbouring corners
	tow points are neighbours if they share the same x or y axis
	x x or y y
	0 0 = 1
	0 1 = 0
	1 0 = 0
	1 1 = 1
	that's the XOR operation
*/