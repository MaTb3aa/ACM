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
#define vi                    vector<int>
#define pii                 pair<int,int>
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int ddx[] = { -1,0,1 };
const double pi = acos(-1), eps = 1e-9;
const int OO = 0x3f3f3f3f, N = 1e6 + 5, mod = 1e9 + 7;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
vector<int>v, vv, vvv;
map<int, int>mp, mp2;
int main() {
	file();
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x; v.push_back(x);
		mp[x] = i;
		mp2[x] = i;
	}
	vv = v;
	vvv = v;
	sort(all(v));
	long long ctr1 = 0, ctr2 = 0;
	for (int i = 0; i < n; ++i) {
		if (v[i] != vv[i]) {
			mp[vv[i]] = mp[v[i]];
			swap(vv[i], vv[mp[v[i]]]);
			ctr1++;
		}
	}
	reverse(all(v));
	for (int i = 0; i < n; ++i) {
		if (v[i] != vvv[i]) {
			mp2[vvv[i]] = mp2[v[i]];
			swap(vvv[i], vvv[mp2[v[i]]]);
			ctr2++;
		}
	}
	cout << min(ctr1, ctr2) << endl;


	
	





	return 0;

} 