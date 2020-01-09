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
#define endl  "\n"
/*MaTb3aa ^_^*/
using namespace std;
void run(){
#ifndef ONLINE_JUDGE

	freopen("in.txt", "r", stdin);

#endif
}
int n, m;
vector<int>adjlist[10001];
int vis[10001];
int ctr = 0;
	
void DFS(int node){
	if (vis[node]){ return; }
	ctr++;
	vis[node] = 1;
	for (int i = 0; i < adjlist[node].size(); i++){
		if (!vis[adjlist[node][i]])
			DFS(adjlist[node][i]);
	}
}

/*The future is for those who believe in the beauty of their dreams.*/
int main()
{
	//run();
	MaTb3aa
		/*    In_the_name_of_allah_the_merciful */
		
	scanf("%d %d", &n, &m);
	int nn,mm;
	mm = m;
	while (m--)
	{
		int x,y;
		scanf("%d %d", &x,&y);
		nn = x;
		adjlist[x].push_back(y);
		adjlist[y].push_back(x);
	}
	memset(vis, 0, sizeof(vis));
	DFS(nn);
	mm++;
	if (ctr == n&&n==mm)printf("YES");
	else printf("NO");
	
	/*    Alhamdulillah   */
	return 0;
}