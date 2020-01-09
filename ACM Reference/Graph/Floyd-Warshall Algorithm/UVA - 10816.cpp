#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;

float deg[105][105],dis[105][105];
int path[105][105];
int S[10004],T[10004];
float R[10004],D[10004];
vector<int>p;
void print (int src,int des){
    if(path[src][des]==-1){
    //  cout<<src<<" "<<des<<endl;
      if(p.empty()||p.back()!=src)p.push_back(src);
      if(p.empty()||p.back()!=des)p.push_back(des);
      return ;
    }
    print(src,path[src][des]);
    print(path[src][des],des);

}
int main() {
        fast
        int n,m;
       while (cin>>n>>m && n && m) {
          p.clear();
          int src, des;
          cin>>src>>des;
       for (int i = 1; i <= n; i++)
           for (int j = 1; j <= n; j++){
               deg[i][j] = 1e9;
               dis[i][j] = 1e9;
               path[i][j] = -1;
             }
       for (int i = 0; i < m; i++) {
           cin>>S[i]>>T[i]>>R[i]>>D[i];
           deg[S[i]][T[i]] = min(deg[S[i]][T[i]],R[i]);
           deg[T[i]][S[i]] = min(deg[T[i]][S[i]],R[i]);
       }

       for (int k = 1; k <= n; k++)for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++)
            deg[i][j] = min(deg[i][j],max(deg[i][k],deg[k][j]));

       float mnDeg = deg[src][des];

       for (int i = 0; i < m; i++) {
           if (R[i]<mnDeg+1e-4) {
               dis[S[i]][T[i]] = min(dis[S[i]][T[i]],D[i]);
               dis[T[i]][S[i]] = min(dis[T[i]][S[i]],D[i]);
           }
       }
     for (int k = 1; k <= n; k++)for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++)
         if (dis[i][j] > dis[i][k] + dis[k][j]) {
             dis[i][j] = dis[i][k] + dis[k][j];
             path[i][j] = k;
         }

        print(src,des);
        cout<<fixed<<setprecision(1);
        for(int i=0;i<p.size();i++)
        cout<<p[i]<<" \n"[i==p.size()-1];
        cout<<dis[src][des]<<" "<<deg[src][des]<<endl;
    }


}
