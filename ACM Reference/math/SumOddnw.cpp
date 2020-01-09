

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
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 1e5 + 2 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
double PI = 3.14159265359;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int main() {
	file();
	ll l, r;
	cin >> l >> r;
	if (l > r)swap(l, r);
	ll stall = (l & 1) ? l - 1 : l;
	ll edall = (r & 1) ? r : r-1;
	stall--;
	ll sumall = (edall*(edall + 1) / 2) - (stall*(stall + 1) / 2);
	ll steven = (stall & 1) ? stall+ 1 : l;
	ll edeven = (edall & 1) ? edall-1 : r ;
	steven /= 2;
	edeven /= 2;
	steven--;
	ll sumeven = (edeven*(edeven + 1) / 2) - (steven*(steven + 1) / 2);
	sumeven *= 2;
	ll ans = sumall - sumeven;
	cout << ans << endl;

	
	

	return 0;
}