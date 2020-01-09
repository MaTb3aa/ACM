#include <bits/stdc++.h>

using namespace std;
const int OO=0x3f3f3f3f,N=1e5+5;
int nmy[N],par[N];
int t,n,m,x,y;

void init(){
    iota(par,par+n,0);
    memset(nmy,0,sizeof nmy);
}
int find(int a){
    return (par[a]==a ? a : par[a]=find(par[a]));
}
inline void join(int a,int b){
    a=find(a);
    b=find(b);
    if(a==b)return;
    par[b]=a;
}
inline bool sameSet(int a,int b){
    return find(a)==find(b);
}
int main(){
 
 	freopen("meciul.in", "rt", stdin);
	freopen("meciul.out", "wt", stdout);
  scanf("%d",&t);
  while(t--){
    scanf("%d %d" , &n, &m);
    init();
        while(m--){
            scanf("%d %d" , &x, &y);
            if(sameSet(x,y)){cout<<"NO\n";continue;}
            if(!nmy[x]) nmy[x]=find(y);
            if(!nmy[y]) nmy[y]=find(x);
            join(nmy[x],y);
            join(nmy[y],x);
            cout<<"YES\n";
        }
  }
    return 0;
}
