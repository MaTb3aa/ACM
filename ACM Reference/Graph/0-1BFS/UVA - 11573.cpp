#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int dr[]={-1,-1,0,1,1,1,0,-1};
int dc[]={0,1,1,1,0,-1,-1,-1};
char g[1005][1005];
int cost[1005][1005];
int n,m;
bool valid(int x,int y){
  return (x>=0 && y>=0 && x<n && y<m);
}
int BFS(int a,int b,int c,int d){
  memset(cost,OO,sizeof cost);
  deque< pair<int,int> >dq;
  dq.push_front({a,b});
  cost[a][b]=0;
  while(!dq.empty()){
    pair<int,int>p=dq.front();dq.pop_front();
    if(p.first==c&&p.second==d)return cost[c][d];
    for(int i=0;i<8;i++){
      int ddx=dr[i]+p.first;
      int ddy=dc[i]+p.second;
      if(valid(ddx,ddy)){
        bool ok=0;
        int c=cost[p.first][p.second];
        if(i!=g[p.first][p.second]-'0')c++,ok=1;
        if(c<cost[ddx][ddy]){
          cost[ddx][ddy]=c;
          if(!ok)dq.push_front({ddx,ddy});
          else dq.push_back({ddx,ddy});
        }
      }
    }
  }
  return 0;
}

int main() {
    fast
      cin>>n>>m;
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)cin>>g[i][j];
      int q;cin>>q;
      while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        --a;--b;--c;--d;
        cout<<BFS(a,b,c,d)<<endl;
      }
    }
