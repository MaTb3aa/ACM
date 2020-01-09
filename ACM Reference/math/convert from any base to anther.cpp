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
int con(char ch) {
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else
		return (ch - 'A') + 10;
}

int main()
{
	file();
	string s; ll base, to;
	while (cin >> s >> base >> to) {
		string stringDigit, answer;
		ll curnum = 0;
		ll pow = 1;
		reverse(all(s));
		for (int i = 0; i < s.size(); i++) {
			curnum += con(s[i])*pow;
			pow *= base;
		}
		int digit;
		ll cpy = curnum;
		while (curnum != 0) {
			digit = curnum % to;

			if (digit < 10)
				stringDigit = '0' + digit;
			else
				stringDigit = digit - 10 + 'A';

			answer = stringDigit + answer;

			curnum /= to;
		}
		if (answer.size() > 7)answer="ERROR";
		 {
			if (cpy==0)answer = '0';
			for (int i = 7; i > answer.size(); i--)cout << ' ';
			cout << answer << endl;
		}
	}
	return 0;
}
