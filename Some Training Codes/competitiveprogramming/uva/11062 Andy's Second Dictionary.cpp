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
	string s,d="";
	set<string>st;
	while (cin >> s) {
		if (s.back() == '-') {
			s.pop_back();
			d += s; continue;
		}
		d += s;
		while (!d.empty()&&!isalpha(d.back()) && d.back() != '-')d.pop_back();
		reverse(all(d));
		while (!d.empty() && !isalpha(d.back()) && d.back() != '-')d.pop_back();
		reverse(all(d));
		string test = "";
		for (int i = 0; i < d.size(); i++) {
			if (isalpha(d[i]) || d[i] == '-') {
				d[i] = tolower(d[i]);
				test += d[i];
			}
			else {
				st.insert(test); test = "";
				st.insert(test);
			}
		}
		if(test!="")st.insert(test);
		 d = "";

	}
	for (auto t : st)if(t!="")cout << t << endl;


}


