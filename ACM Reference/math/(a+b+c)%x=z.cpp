#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define endl '\n'
#define sz(v) (int)v.size()
#define ndl puts("")


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const int N = 1e6 + 3, M = 1e5 + 3;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x*y) / gcd(x, y)); }

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // !ONLINEJUDGE

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int main() {

	file();
	int  c, d, x, y;
	/* find a b */
	/* (a+b+c)%x=d%y */
	cin >> c >> d >> x >> y;
	int z = d % y; 
	if (z>=x)
		cout << "-1 -1\n";
	else {
			if ((c + 1) % x < z)
				cout << 1 << " " << (z - (c + 1) % x) << endl;
			else
				cout << 1 << " " << (z - (c + 1) % x)+x << endl;
	}

	return 0;

}