#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
#define sz(v)               ((int)((v).size()))
#define ss	                second
#define ff	                first
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define MaTb3aa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v)          ((v).begin()), ((v).end())
typedef long long ll;
ll gcd(ll a, ll b){ return (b == 0 ? abs(a) : gcd(b, a%b)); }

#define endl  "\n"

/*MaTb3aa ^_^*/
using namespace std;
void run(){
#ifndef ONLINE_JUDGE	

	freopen("in.txt", "r", stdin);

#endif
}
/*The future is for those who believe in the beauty of their dreams.*/

int main()
{
	//run();
	MaTb3aa
		/*    In_the_name_of_allah_the_merciful */
		int n, m;
	cin >> n >> m;
	map<string, ll>mp;
	string s, a;
	ll x;
	while (n--)
	{
		cin >> s >> x;
		mp[s] = x;
	}

	vector<string>v;
	while (m--)
	{
		ll sum = 0;
		while (cin>>a&&a!=".")
		{
			v.push_back(a);
		}
		for (int i = 0; i < v.size(); i++){
			if (mp.find(v[i]) != mp.end())
				sum += mp[v[i]];
		}
		cout << sum << endl;
		v.clear();
	}
	/*    Alhamdulillah   */
	return 0;
}