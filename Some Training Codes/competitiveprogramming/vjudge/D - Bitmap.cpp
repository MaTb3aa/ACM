
#include "bits/stdc++.h"
using namespace std;
int const OO=0x3f3f3f3f;
char arr[200][200];
int dis[200][200];
int x,y;
bool valid (int a,int b){return a>=0&&b>=0&&a<x&&b<y;}
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void BFS(int x,int y){
queue<int>q;
q.push(x);q.push(y);
   dis[x][y]=0;
   while(!q.empty()){
   int a=q.front();q.pop();
   int b=q.front();q.pop();
  
   for(int i=0;i<4;i++){
      int ddx=dx[i]+a;
      int ddy=dy[i]+b;
      if(valid(ddx,ddy)&&dis[a][b]+1<dis[ddx][ddy]){
        dis[ddx][ddy]=dis[a][b]+1;q.push(ddx);q.push(ddy);
     //   cout<<ddx<<" "<<ddy<<endl;
      }
  }
  }
}

int main()
{
   int t;cin>>t;
   while(t--){
   cin>>x>>y;
   vector<int> onesi;
   vector<int> onesj;
   for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='1'){onesi.push_back(i);onesj.push_back(j);}
      }
   }
   memset(dis,OO,sizeof dis);
   for(int i=0;i<onesi.size();i++){
     
        BFS(onesi[i],onesj[i]);
      
   }
   for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cout<<dis[i][j]<<" ";
       }
       cout<<endl;
   }
   
   }

   

    
    
    return 0;
}
