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

int main()
{
	file();
	ll n, m;
	vector<ll>v;
	map<ll, int>mp;
	while (cin >> n >> m ) {
		if (!n)break;
		ll k; cin >> k;
		mp.clear();
		v.clear();
		v.resize(k + 1);
		int cnt = 0;
		for (int i = 0; i <= k; i++)cin >> v[i];
		for (ll i = 0; i <= m; i++) {
				ll sum = 0, p = 1;
				for (ll j = 0; j < v.size(); j++) {
					if (v[j]) {
						sum += (v[j] * p);
						sum%=(n + 1);
					}
					p *= i; p %= (n + 1);
				}
			if (mp.find(sum) == mp.end()) {
				cnt++; mp[sum]++;
			}
		}
		cout << cnt<<endl;
	}
	return 0;
}
