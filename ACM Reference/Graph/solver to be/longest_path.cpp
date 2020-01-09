//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 2*1e5 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f,mod=1e9+7;
int dx[] = {-1,1,0,0 };
int dy[] = {0,0,-1,1 };
#define all(v) ((v).begin()), ((v).end())
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
vector<vector<int>>g;
int mx,to;
void DFS(int node,int per,int cost){
	if(cost>mx){
		mx=cost;
		to=node;
	}
	for(int i=0;i<g[node].size();i++){
		if(g[node][i]!=per){
			DFS(g[node][i],node,cost+1);
		}
	}
}
int main()
{
	fast
	int n;cin>>n;
	g.resize(n);
	for (int i = 1; i < n; ++i) {
		int a,b;cin>>a>>b;
		--a;--b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	DFS(0,-1,0);
	int from=to;
	mx=-1;
	DFS(from,-1,0);
	cout<<from<<" "<<to<<" "<<mx<<endl;

	return 0;
}
/*
 7
1 2
2 4
2 5
4 6
1 3
3 7
 */
