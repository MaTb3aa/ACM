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
#include <math.h>
#define P(x)     cout<<"\n\n*****"<<x<<"****\n\n";
#define RT(x)    return cout<<x,0;
const int N = 1.5 * 10000000 + 16, M = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
#define all(v) ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define mem(x,y) memset(x,y,sizeof(x))
const double PI = 3.14159265358979323846;
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

int main() {
	file();
	double up, diameter, level, Bvolume, bucket_ascen, down, required;
	int t = 1;
	while (cin >> up && up >= 1.0) {
		cin >> diameter >> level >> Bvolume >> bucket_ascen >> down >> required;
		if (t > 1) printf("\n");
		printf("Scenario %d:\n", t++);
		printf("     up hill         %10.2lf sec\n", up);
		printf("     well diameter   %10.2lf in\n", diameter);
		printf("     water level     %10.2lf in\n", level);
		printf("     bucket volume   %10.2lf cu ft\n", Bvolume);
		printf("     bucket ascent rate%8.2lf in/sec\n", bucket_ascen);
		printf("     down hill       %10.2lf sec\n", down);
		printf("     required volume %10.2lf cu ft\n", required);
		double time = 0;
		double minus = (Bvolume * 12 * 12 * 12) / (PI*diameter*diameter / 4.0);
		double acc = 32.2 * 12.0;
		for (int i = 0; i < ceil(required / Bvolume -0.0000000001); i++) {
			double down2 = sqrt(level * 2 / acc);//time down for bucket
			double up2 = level * 1.0 / bucket_ascen;//time up for bucket
			time += (up + up2 + down + down2);
			level += minus;
		}
		printf("     TIME REQUIRED   %10.2lf sec\n", time);

	}
	return 0;

}
