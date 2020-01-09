#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;

struct edge {
	int from, to, w;
	edge(int from, int to, int w): from(from), to(to), w(w) {}
	bool operator < (const edge & e) const {
		return w > e.w;
	}
};
vector<vector<edge>>g;
ll Dijkstra(int n,int src,int des){
  vector<int>dis(n+3,OO);
  dis[src]=0;
  priority_queue<edge>pr;
  pr.push({-1,src,0});
  while (!pr.empty()) {
  edge cur = pr.top();pr.pop();
    if(cur.w > dis[cur.to])continue;
    for(auto t : g[cur.to]){
      if(dis[t.to] > t.w+cur.w){
        t.w = dis[t.to] = cur.w + t.w;
        pr.push(t);
      }

    }
  }
  return dis[des];
}

int main() {
    fast
    int t;
    cin>>t;
    while(t--){
      int n;cin>>n;
      g.clear();
      g.resize(n+5);
      map<string,int>mp;
      int idx=0;
      string s;
      for(int i=1;i<=n;i++){
        cin>>s;mp[s]=i;
        int tt;
        cin>>tt;
          while(tt--){
            int v,cost;cin>>v>>cost;
            g[i].push_back({i,v,cost});
         }
      }
      int q;cin>>q;
      while(q--){
        string a,b;cin>>a>>b;
        cout<<Dijkstra(n,mp[a],mp[b])<<endl;
      }

    }

}
