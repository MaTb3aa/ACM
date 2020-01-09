#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int arr[1005][1005];
int dis[1005][1005];
int n,m;
bool valid(int x,int y){
  return (x>=0 && y>=0 && x<n && y<m);
}
struct Edge{
    pair<int,int> from,to;
    int w;
    bool operator < (const Edge & e) const {
            return w > e.w;
    }

};
vector<vector<Edge>>g;
int Dijkstra(){
    memset(dis,OO,sizeof dis);
    dis[0][0] = arr[0][0];
    priority_queue<Edge>pr;
    pr.push({{-1,-1},{0,0},arr[0][0]});
    while(!pr.empty()){
        Edge cur = pr.top();pr.pop();
        if(cur.w > dis[cur.to.first][cur.to.second])continue;
     	for(int i=0;i<4;i++){
        int ddx=dx[i]+cur.to.first;
        int ddy=dy[i]+cur.to.second;
        if(valid(ddx,ddy)){
          Edge t={{cur.to.first,cur.to.second},{ddx,ddy},arr[ddx][ddy]};
          if(dis[t.to.first][t.to.second] > cur.w + t.w){

            t.w = dis[t.to.first][t.to.second] = cur.w + t.w;
            pr.push(t);

          }
        }
      }

    }
    return dis[n-1][m-1];
}
                             /***  Ø¨Ø³Ù� Ø§Ù�Ù�Ù� Ø§Ù�Ø±Ø­Ù�Ù� Ø§Ù�Ø±Ø­Ù�Ù�ð���  ***/
int main() {
    fast
    int t;cin>>t;
    while (t--) {
      cin>>n>>m;
      for(int i=0;i<n;i++)
        for (int j = 0; j < m; j++) {
        cin>>arr[i][j];
      }
      cout<<Dijkstra()<<endl;
  }




}
