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
int arr[1000007];
int vis[107];
bool ok(int k) {
	for (int i = 1; i <= k; i++)
		if (vis[i] <= 0)return 0;
	return 1;
}
int main() {
	file();	
	int t;
	cin >> t;
	int tt = 1;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		cout << "Case " << tt++ << ": ";
		mem(vis, 0);
		mem(arr, 0);
		arr[0] = 1; arr[1] = 2; arr[2] = 3;
		for (int i = 3; i < n; i++) {
			arr[i] = (arr[i] + arr[i - 1] + arr[i - 2] + arr[i - 3]) % m + 1;
			
		}
			int st = 0, ed = 0, mn = 1e9;
			while (st <= n && ed <= n) {
				if (ok(k)) {
					mn = min(mn, ed - st);
					if(arr[st]<=k)vis[arr[st]]--;
					if (st == n)break;
					st++;
				}
				else {
					if (arr[ed] <= k)vis[arr[ed]]++;
					if (ed == n)break;
					ed++;
				}
			}
			
			if (mn == 1e9)cout << "sequence nai\n";
			else cout << mn << endl;
		
	}
	


}


