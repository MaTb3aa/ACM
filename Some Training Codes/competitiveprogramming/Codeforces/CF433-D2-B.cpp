#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<set>
#include<fstream>
#include<map>
#include<string>
#include <stdio.h>
#include<bitset>
#include<queue>
#include<iomanip>
#include<cmath>
#include<stack>
#include<climits>

#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
#define endl '\n'
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define MaTb3aa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v)          ((v).begin()), ((v).end())
typedef long long ll;
#define endl  "\n"
//ll x = bts.to_llong

/*MaTb3aa ^_^*/
using namespace std;
void run(){
#ifndef ONLINE_JUDGE

	freopen("in.txt", "r", stdin);

#endif
}


int main()
{
	//run();
	MaTb3aa

		int sz;
	cin >> sz;
	++sz;
	vector<ll>v(sz);
	vector<ll>vv(sz);
	v[0] = 0;
	vv[0] = 0;
	for (int i = 1; i < sz; i++){
		cin >> v[i];
		vv[i] = v[i];
	}
	sort(all(vv));

	for (int i = 1; i < sz; i++){
		v[i] += v[i - 1];
		vv[i] += vv[i - 1];
	}

	int t, tt, l, r;
	cin >> t;
	while (t--)
	{
		cin >> tt >> l >> r;
		if (tt == 1){ cout << v[r] - v[l - 1] << endl; }
		else if (tt == 2){ cout << vv[r] - vv[l - 1] << endl; }

	}

}
