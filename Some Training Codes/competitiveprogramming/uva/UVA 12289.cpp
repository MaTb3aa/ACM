#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
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
		int t;
	map<char, int>mp;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++){ mp[s[i]]++; }
		if ((mp['o']>0 && mp['n']>0) || (mp['o']>0 && mp['e']>0) || (mp['n'] > 0 && mp['e'] > 0))cout << 1 << endl;
		else if ((mp['t']>0 && mp['w']>0) || (mp['w']>0 && mp['o']>0) || (mp['t'] > 0 && mp['o'] > 0))cout << 2 << endl;
		else if ((mp['t']>0 && mp['h']>0 && mp['e']>1) || (mp['t']>0 && mp['h']>0 && mp['r']>0) || (mp['r']>0 && mp['h']>0 && mp['e']>1))cout << 3 << endl;
		mp.clear();
	}


}
