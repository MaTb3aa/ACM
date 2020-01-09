#include <bits/stdc++.h>

using namespace std;

int vid,t,num;
int vis[1000][1000];
struct state{
int mod,perID,dig,rem;
};
vector<state>q;
/*int sumDig(int x){
    int ans=0;
    while(x>0){
    ans+=x%10;
    x/=10;
    }
    return ans;
}*/

void BFS(int x=num){
++vid;
q.clear();
for(int i=1;i<=min(num,9);i++){q.push_back({i%num,-1,i,num-i});vis[i%num][num-i]=vid;
if(!(num-i)&&!(i%num))return;}
    
for(int i=0;i<q.size();i++){
    for(int j=0;j<=min(9,q[i].rem);j++){
        int MOD=(q[i].mod*10+j)%x;
        int nwrem=(q[i].rem)-j;
        if(vis[MOD][nwrem]==vid)continue;
        vis[MOD][nwrem]=vid;
        q.push_back({MOD,i,j,nwrem});
        
        if(!nwrem&&!MOD)return;
        }
    }
}
void print (int x){
    if(~q[x].perID)print(q[x].perID);
    cout<<q[x].dig;
}              


int main(){
     cin>>t;
     while(t--){
     cin>>num;
     BFS();
     print(q.size()-1);
     cout<<endl;
      
     }
    return 0;
}
