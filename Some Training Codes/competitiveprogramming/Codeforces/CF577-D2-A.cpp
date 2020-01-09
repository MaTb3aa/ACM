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

	int b, n;

	while (cin >> b >> n)
		int v[21];
	for (int i = 0; i < b; i++){
		cin >> v[i];
	}
	for (int i = 0; i < n; i++){
		int f, s, m;
		cin >> f >> s >> m;
		f -= 1; s -= 1;
		v[f] -= m;
		v[s] += m;
	}
	bool p = 0;
	for (int i = 0; i < b; i++){
		if (v[i] < 0){
			p = 1; break;
		}
	}
	if (p == 1)cout << "N/n";
	cout << "S\n";

	return 0;
}
