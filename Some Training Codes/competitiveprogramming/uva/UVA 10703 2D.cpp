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
int arr[505][505];
int main() {
	file();
	int w, h, n;
	while (cin >> w >> h >> n ) {
		if (!n&&!h&&!w)break;
		memset(arr, 0, sizeof arr);
		while (n--) {
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2)swap(x1, x2);
			if (y1 > y2)swap(y1, y2);
			arr[x1][y1]++;
			arr[x1][y2 + 1]--;
			arr[x2 + 1][y2 + 1]++;
			arr[x2 + 1][y1]--;
		}
		for (int i = 1; i <= w; i++)
			for (int j = 1; j <= h; j++)
				arr[i][j] = arr[i][j] + arr[i - 1][j]
				+ arr[i][j - 1] - arr[i - 1][j - 1];
		int ctr = 0;
		for (int i = 1; i <= w; i++) 
			for (int j = 1; j <= h; j++) 
				if (!arr[i][j])ctr++;
		if (!ctr)cout<<("There is no empty spots.\n");
		else if (ctr == 1)cout<<("There is one empty spot.\n");
		else cout<<"There are " << ctr << " empty spots.\n";
	}
	
	
}	