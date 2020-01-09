#include <bits/stdc++.h>
using namespace std;

int n;
bool valid (int i,int j){return i>-1&&i<n&&j>-1&&j<n;}
int dx[] ={1,-1,1,0,-1,0,1,-1};
int dy[] ={1,-1,0,1,0,-1,-1,1};
char vis[105][105];
char arr[105][105];

void solve(int x,int y){

for(int i=0;i<8;i++){
    int ddx=dx[i]+x;
    int ddy=dy[i]+y;
    
   if(valid(ddx,ddy)&&vis[ddx][ddy]==0&&arr[ddx][ddy]=='1'){vis[ddx][ddy]=1;solve(ddx,ddy);}
   
}

}

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int num=1;
while(cin>>n)
{

memset(vis,0,sizeof vis);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    int ctr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='1'&&vis[i][j]==0){
            vis[i][j]=1;
                solve(i,j);ctr++;

            }
        }
    }
    cout<<"Image number "<<num++<<" contains "<<ctr<<" war eagles.\n";
    
}

   return 0;
}
