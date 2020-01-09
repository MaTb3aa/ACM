#include <bits/stdc++.h>

using namespace std;
int num,vid,vis[20000] ;
struct state {
int mod,perID,dig;
};
vector<state>v;
void BFS(){ 
    ++vid;
    v.clear();
    v.push_back({1,-1,1});
    vis[v[0].mod]=vid;
    if(num==1)return ;
    for(int i=0;i<v.size();i++){
        for(int k=0;k<2;k++){
            int nw=(v[i].mod*10+k)%num;
            if(vis[nw]==vid)continue;
            vis[nw]=vid;
            v.push_back({nw,i,k});
            if(!nw)return;
        } 
    }
}
void print(int x){
    if(x) print(v[x].perID);
    cout<<v[x].dig;
}
int main(){
    int t;cin>>t;
    while(t--){
    cin>>num;
    BFS();
    print(v.size()-1);
    cout<<endl;
       
    }
}
