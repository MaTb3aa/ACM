#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
#define sz(v)               ((int)((v).size()))
#define ss	                second
#define ff	                first
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define MaTb3aa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v)          ((v).begin()), ((v).end())
typedef long long ll;

ll gcd(ll a, ll b){ return (b == 0 ? abs(a) : gcd(b, a%b)); }
char arr[101][101];
#define endl  "\n"
/*MaTb3aa ^_^*/
using namespace std;
void run(){
#ifndef ONLINE_JUDGE

	freopen("in.txt", "r", stdin);

#endif
}
int m, n;
bool valid(int i, int j){ return i >= 0 && j >= 0 && i < m&&j < n; }
int dx[] = { -1, 0, 0 };
int dy[] = { 0, 1, -1 };
char graph[9][9];
vector<char> vis;
vector<string> s = { "forth","right", "left" };
vector<string>v;
string ans = "IEHOVA#";
void dfs(int x, int y,int idx){
	if (idx > ans.size())return;
	for (int i = 0; i < 3; i++){
		 int ddx = x + dx[i];
		int  ddy = y + dy[i];
		if (graph[ddx][ddy] == ans[idx]&&valid(ddx,ddy)){
			v.push_back(s[i]);
			dfs(ddx, ddy, idx + 1);
		}
	}
}
	/*The future is for those who believe in the beauty of their dreams.*/
int main()
{
	//run();
	MaTb3aa
		/*    In_the_name_of_allah_the_merciful */
		int t;
	cin >> t;
	while (t--)
	{
		
		cin >> m >> n;
		pair<int, int>p;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cin >> graph[i][j];
				if (graph[i][j] == '@')p = { i, j };
			}
		}
		v.clear();
		dfs(p.ff, p.ss,0);	
		for (int i = 0; i < v.size(); i++){
			if (i == v.size() - 1)cout << v[i];
			else cout << v[i] << " ";
		}
	cout << endl;
	}
	/*    Alhamdulillah   */
	return 0;
}