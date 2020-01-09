//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define endl                         '\n'	
#define Ceil(x,y)             ((x+y-1)/y)
#define sz(s)               (int)s.size()
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
	int t;
	cin >> t;
	while (t--) {
		string s;
		int p; cin >> p;
		cin.ignore();
		vector<vector<int>>v(p);
		int mn = 1e9;
		for (int i = 0; i < p; i++) {
			getline(cin, s);
			stringstream ss; ss << s;
			while (ss) {
				int x; ss >> x; 
				v[i].push_back(x);
			}
			mn = min(mn, sz(v[i]));
		}
		
		vector<int>vv;
		for (int i = 0; i < p; i++)
			if (sz(v[i]) == mn)vv.push_back(i + 1);
		for (int i = 0; i < vv.size(); i++) {
			if (i == vv.size() - 1)cout << vv[i] << endl;
			else cout << vv[i] << " ";
		}
		

	}

}