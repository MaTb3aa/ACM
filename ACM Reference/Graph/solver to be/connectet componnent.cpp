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
	vector<bool>vis;
	vector<vector<int>>g;
	void DFS(int u){
		vis[u]=true;
		for(int i=0;i<g[u].size();i++)
			if(!vis[g[u][i]])DFS(g[u][i]);
	}
	int main()
	{
		fast
		int n,e;
		cin>>n>>e;
		g.resize(n);
		vis.resize(n);
		for(int i=0;i<e;i++){
			int x,y;
			cin>>x>>y;
			--x;--y;
			g[x].push_back(y);
		}
		int res=0;
		for(int i=0;i<n;i++){
			if(!vis[i]){
				res++;
				DFS(i);
			}
		}
		cout<<res<<endl;

		return 0;
	}
/*
14 10
1 2
1 3
1 4
1 6
3 11
7 9
7 10
9 12
5 13
13 14
*/



