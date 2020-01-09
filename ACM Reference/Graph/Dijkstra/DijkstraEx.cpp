#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;

vector<ll>dis(N,1e11);
int par[N];

struct Edge{
    ll from,to ,w;
    bool operator < (const Edge & e) const {
            return w > e.w;
    }

};
vector<vector<Edge>>g;
bool Dijkstra(int src,int des){
    memset(par,-1,sizeof par);
    dis[src]=0;
    priority_queue<Edge>pr;
    pr.push({-1,src,0});

    while(!pr.empty()){
        Edge cur = pr.top();pr.pop();
        if(cur.w > dis[cur.to])continue;
        par[cur.to]=cur.from;
     	for (auto t : g[cur.to])
	    	if(dis[t.to] > cur.w + t.w){
			t.w = dis[t.to] = cur.w + t.w;
			pr.push(t);
		}

    }
    return par[des]!=-1;

}
void print(int u){

    if(u==-1)return;
    print(par[u]);
    cout<<u<<" ";
}

                                   /***  بسم الله الرحمن الرحيم😁  ***/   
int main() {
    fast
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    for(int i=0;i<m;i++){
        int from ,to ,w;
        cin>>from>>to>>w;
        g[from].push_back({from,to,w});// take care about it ^^
        g[to].push_back({to,from,w}); // take care about it ^^
    }

    if(Dijkstra(1,n))print(n);
    else cout<<-1<<endl;

}
