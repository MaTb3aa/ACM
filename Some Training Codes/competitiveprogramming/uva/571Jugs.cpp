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

vector<string>v,vv;
void solve(int A,int B ,int C) {
	v.push_back("fill A");
	int a=A , b=0,dif ;
	while (a != C || b != C) {
	    dif = min(a, B - b);
		b += dif;
		a -= dif;
		v.push_back("pour A B");
		if (a == C || b == C)break;
		if (a == 0) {
			a = A;
			v.push_back("fill A");
		}
		if (b == B) {
			b = 0;
			v.push_back("empty B");
		}
	}
	
}

int main() {
	file();
	int a, b, x;
	while (cin >> a >> b >> x &&a && b) {
		v.clear();vv.clear();
		solve(a, b, x);
		v.push_back("success");
		for (auto t : v)cout << t << endl;

	
	}
	return 0;
}