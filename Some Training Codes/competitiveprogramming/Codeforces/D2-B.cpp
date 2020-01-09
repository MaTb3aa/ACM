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
		int sz, idx;
	cin >> sz >> idx;
	int c = 0;
	vector<int>v(1000000);
	v[0] = 0;
	int a = idx - 1, b = idx + 1;
	for (int i = 1; i <= sz; i++){
		cin >> v[i];
	}
	//cout << a << " " << idx << " " << b << endl;;
	for (int i = 1; i <= sz; i++){
		 if (a >= 1 && b <= sz){
			 if (v[a] == 1 && v[b] == 1){ c += 2; }

		}
		else if (a < 1 && b <= sz){
			if (v[b] == 1){ c++; }
		}
		else if (a >= 1 && b > sz){
			if (v[a] == 1){ c++; }
		}
		a--;
		b++;
	}
	if (v[idx] == 1)c++;
	cout << c;

}
