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
#include <numeric>
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

int main() {
	file();
	int n; bool ok = 0;
	while (cin >> n && n) {
		int x;
		while(cin >> x && x){
		vector<int>v,vv;
		v.push_back(x);
		for (int i = 1; i < n; i++) {
			int x; cin >> x; v.push_back(x);
		}
		vv.resize(n);
		iota(all(vv), 1);
		reverse(all(v));
		reverse(all(vv));
		stack<int>st;
		while(!vv.empty()){
			if (vv.back() == v.back()) {
				vv.pop_back();
				v.pop_back(); 
			}
			else if (!st.empty() && st.top() == v.back()) {
				st.pop(); v.pop_back(); 
			}
			else { st.push(vv.back()); vv.pop_back(); }
		}
		while (!st.empty() && st.top()==v.back()) {
			st.pop(); v.pop_back();
		}
			if (st.empty())cout << "Yes\n";
			else cout << "No\n";
		}
		cout << endl;

	}
}