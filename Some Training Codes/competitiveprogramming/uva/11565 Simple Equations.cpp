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

int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		bool ok = 0;
		int x=0, y=0, z=0;
		for (int i = -100; i <= 80; i++) {
			for (int j = -100; j <= 80; j++) {
				z = a - i - j;
				if (i == z || i == j || z == j)continue;
				if (z + i + j == a && (z*i*j) == b && ((i*i) + (j * j) + (z * z) == c)) { x = i; y = j;  ok = 1; break; }
			}
			if (ok)break;
		}
		if (ok)cout << x << " " << y << " " << z << endl;
		else cout << "No solution.\n";	
	}
	return 0;
		
}

