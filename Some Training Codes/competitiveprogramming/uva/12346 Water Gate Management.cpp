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

int main() {
	file();
	int n;
	while (cin >> n) {
	vector<pair<int, int>>v(n);
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i].first >> v[i].second;
			sum += v[i].first;
		}
		int tt = 1;
		int q; cin >> q;
		while (q--) {
			cout << "Case "<<tt++ << ": ";
			ll x, y;
			cin >> x >> y;
			ll ans = 1e18;
			for (int i = 0; i < (1 << n); i++) {
				bitset<35>bit(i);
				ll sum = 0, cost = 0;
				for (int j = 0; j < n; j++) {
					if (bit[j]) {
						sum += (y*v[j].first);
						cost += v[j].second;
					}
				}
				if (sum >= x)ans = min(ans, cost);			
			}
			if (ans == 1e18)cout << "IMPOSSIBLE\n";
			else cout << ans << endl;
			
		}
	}
	return 0;

}