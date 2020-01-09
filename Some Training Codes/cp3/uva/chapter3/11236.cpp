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
#define watch(x) cout<<(#x)<<" = "<<x<<endl
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const double PI = acos(-1), EPS = 1e-7;
const int OO = 0x3f3f3f3f, N = 1e7 + 5, mod = 1e9 + 7;
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



int main() {
	file();
	int d, p, s;
	for (int a = 0; a + a + a + a <= 2000; a++)
		for (int b = a; a + b + b + b <= 2000; b++)
			for (int c = b; a + b + c + c <= 2000; c++) {
				p = (long long)a*b*c;
				if (p <= 1000000) continue;
				s = (a + b + c);
				if (s * 1000000 % (p - 1000000)) continue;
				d = s * 1000000 / (p - 1000000);
				if (a + b + c + d > 2000 || d < c) continue;
				printf("%d.%02d %d.%02d %d.%02d %d.%02d\n", a / 100, a % 100, b / 100, b % 100, c / 100, c % 100, d / 100, d % 100);
			}


}