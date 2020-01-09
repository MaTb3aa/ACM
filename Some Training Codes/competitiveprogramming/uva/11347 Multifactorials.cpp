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

int main() {
	file();
	int t,tt=1;
	cin >> t;
	while (t--) {
		int n = 0;
		map<int, int>mp;
		string s,d=""; cin >> s;
		reverse(all(s));
		while (!s.empty() && s.back() != '!') {
			d += s.back(); s.pop_back();
		}
		stringstream ss; ss << d; ss >> n;
	
		for (int i = n; i > 0; i -= s.size()) {
			int num = i;
			for (int j = 2; j <= num; j++)
				while (num%j == 0)
					num /= j, mp[j]++;
		}
		ll ans = 1;
		double sum = 0;
		for (auto t : mp) {
			ans *= (t.second + 1);
			sum += log10(t.second + 1);
		}
		cout << "Case " << tt++ << ": ";
		if (ceil(sum)>18)cout << "Infinity\n";
		else cout << ans << endl;
	}

}