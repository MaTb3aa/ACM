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
	while (cin>>n>>m&&n!=0&&m!=0)
	{
		vector<int>v;
		int x, t = n + m,c=0;
		map<int, int>mp;
		while (t--)
		{
			cin >> x;
			v.push_back(x);
			mp[x]++;
		}
		for (int i = 0; i < v.size(); i++){
			if (mp[v[i]]>2)c++;
			//cout << mp[v[i]] << " ";
		}
		cout << c << endl;
	}
	/*    Alhamdulillah   */
	return 0;
}