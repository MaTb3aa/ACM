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
vector<string>v;
bool vis[900][900];
bool valid(int x, int y) {
	return (x >= 0 && y >= 0 && x < v.size() && y < v[x].size());
}
void BFS(int x, int y) {
	vis[x][y] = 1;
	queue<pair<int, int>>q;
	v[x][y] = '#';
	q.push({ x,y });
	while (!q.empty()) {
		pair<int, int>p = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int ddx = dx[i] + p.first;
			int ddy = dy[i] + p.second;
			if (valid(ddx, ddy) &&!vis[ddx][ddy]&& !isalpha(v[ddx][ddy] )) {
				vis[ddx][ddy] = 1;
				v[ddx][ddy] = '#';
				q.push({ ddx,ddy });
			}
		}
	}
}
int main() {
	file();
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s; v.clear();
		mem(vis, 0);
		int nx=-1, ny=-1;
		while (getline(cin,s)) {
			if (s.find('_') != string::npos)break;
			for (int i = 0; i < s.size(); i++)
				if (s[i] == '*')nx = v.size(), ny = i;
			v.push_back(s);
		}
		BFS(nx, ny);
		for (int i = 0; i < v.size(); i++) {
			string d = v[i]; cout << d << endl;
		}
		cout << s << endl;

		
		
	}
	
	
	
	


	return 0;
}
/*
1
AAAAAAAAA
A   A   A
A * A   A
A   A   A
AAAAAAAAA

AAAAAAAAA
A###A   A
A###A   A
A###A   A
AAAAAAAAA
AAAAAAAAA



*/