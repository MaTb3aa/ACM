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
char arr[11][11];
int n;
bool valid(int x, int y) {
	return (x >= 0 && y >= 0 && x < n && y < n);
}
char ok(int x, int y) {
	char chh;
	for ( char ch = 'A'; ch <= 'Z'; ch++) {
		chh = ch; bool kk = 0;
		for (int i = 0; i < 4; i++) {
			int ddx = dx[i] + x;
			int ddy = dy[i] + y;
			if (valid(ddx, ddy) && arr[ddx][ddy] == chh)kk = 1;
		}
		if(!kk)return chh;
	}
}
int main() {
	file();	
	int t;
	cin >> t;
	int tt = 1;
	while (t--) {
		cin >> n;
		cout << "Case " << tt++ << ": ";
		string s; cin >> s;
		deque<char>dq;
		int ctr = 0;
		reverse(all(s));
		while (!s.empty()) {
			dq.push_back(s.back());
			s.pop_back();
			while (!dq.empty()&&dq.front() == '#')dq.pop_front();
			if (dq.size()==3) {
				ctr++; dq.clear();
			}
		}
		if (dq.size())ctr++;
		cout << ctr << endl;
	}

}


