#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int> pi;
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;
vector<vector<pair<pi,int>>>g;
vector<ll>dis;
int n,m,k;
bool Dijkstra(ll md){
  dis.clear();
  dis.resize(n+1,1e15);
  dis[0]=0;
  priority_queue<pi , vector<pi> ,greater<pi> >pr;
  pr.push({1,0});
  while(!pr.empty()){
    pi p = pr.top();pr.pop();
    if(p.second>k)continue;
    for(auto t : g[p.first]){
        int v=t.first.first , weight=t.first.second , mx=t.second;
        if(dis[v] > (weight + p.second) && mx <= md){
          dis[v] = (weight + p.second);
          pr.push({v,dis[v]});
        }
    }
  }
  return dis[n] <k;
}

int BS(){
  ll st=1,ed=1e10,cur=-1,md;
  while(st<=ed){
    md=st+ed>>1;
    if(Dijkstra(md)){
      ed=md-1;cur=md;
    }
    else st=md+1;
  }
  return cur;
}
int main() {
      fast
      int t;cin>>t;
      while(t--){
        cin>>n>>m>>k;
        g.clear();
        g.resize(n+1);
        while(m--){
            int a,b,c,w;
            cin>>a>>b>>c>>w;
            g[a].push_back({{b,c},w});
            g[b].push_back({{a,c},w});
        }
        cout<<BS()<<endl;
      }


}
