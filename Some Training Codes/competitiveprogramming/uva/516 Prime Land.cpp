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

int main() {
	file();
	string s;
	while (getline(cin, s)) {

		stringstream ss; ss << s;
		ll num = 1;
		int x,y;
		while (ss>>x) {
			ss >> y;
			ll cur = 1;
			for (int i = 0; i < y; i++)cur *= x;
			num *= cur;
		}
		num--;
		map<int, int>mp;
		for (ll i = 2; i*i <= num; i++) {
			while (num%i == 0)
				mp[i]++, num /= i;
		}
		if (num > 1)mp[num]++;
		vector<pair<int, int>>v;
		for (auto t : mp)
			v.push_back({ t.first,t.second });
		reverse(all(v));
		for (int i = 0; i < v.size(); i++) {
			if(i!=v.size()-1)cout <<v[i].first << " " << v[i].second << " ";
			else cout << v[i].first << " " << v[i].second<< endl;
		}
			
	}

}