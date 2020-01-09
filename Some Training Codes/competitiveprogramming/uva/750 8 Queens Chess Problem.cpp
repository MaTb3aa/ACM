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
const double PI = 3.14159265358979323846;
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
vector<int>v;
vector<vector<int>>vv;
int cnt = 0;
int d1[2 * 8 + 1], d2[2 * 8 + 1], vis[9];
void solve(int r) {

	if (r == 8) {
		vv.push_back(v);
		cnt++;
		return;
	}

	for (int i = 0; i < 8; i++) 
		if (!vis[i] && !d1[i + r] && !d2[8 + i - r]) {
			vis[i] = d1[i + r] = d2[8 + i - r] = 1;
			v.push_back(i+1);
			solve(r + 1);
			vis[i] = d1[i + r] = d2[8 + i - r] = 0;
			v.pop_back();
		}
	
}
int main() {
	file();
	solve(0);
	sort(all(vv));
	int t; cin >> t;
	while (t--) {
		int ctr = 1;
		int x, y; cin >> x >> y;
		cout << "SOLN       COLUMN\n";
		cout << " #      1 2 3 4 5 6 7 8\n\n";
		vector<vector<int>>v;
		for (int i = 0; i < vv.size(); i++) {
			if (vv[i][y - 1] == x)
				v.push_back(vv[i]);
		}
		for (int i = 0; i < v.size(); i++) {
		cout << setw(2)<<ctr++<<"      ";
			for (int j = 0; j <8; j++) {
				if (j == 7)cout << v[i][j] << "\n";
				else cout << v[i][j] << " ";
			}	
			
		}
		if(t>0)cout << endl;
	}
	return 0;
		
}
