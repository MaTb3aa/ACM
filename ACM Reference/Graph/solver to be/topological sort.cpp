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

int main()
{
	fast
	vector<vector<int>>g;
	int n,e;cin>>n>>e;
	g.resize(n);
	vector<int>sol,in(n),ready;
	for(int i=0;i<e;i++){
		int a,b;cin>>a>>b;
		--a;--b;
		g[a].push_back(b);
		in[b]++;
	}
	for(int i=0;i<n;i++){
		cout<<i<<" "<<in[i]<<endl;
		if(in[i]==0)ready.push_back(i);
	}
	while(!ready.empty()){
		int u=ready.back();ready.pop_back();
		sol.push_back(u);
		for(int i=0;i<g[u].size();i++){
			in[g[u][i]]--;
			if(in[g[u][i]]==0)ready.push_back(g[u][i]);
		}
	}
	for(int i=0;i<sol.size();i++)cout<<sol[i]+1<<" ";

	return 0;
}
