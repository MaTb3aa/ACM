#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int OO = 0x3f3f3f3f, N = 2e5 + 5,mod = 1e9 + 7;

int arr[100][100],dis[100][100];
int path[100][100];
void print (int src,int des){

    if(path[src][des]==-1){
        cout<<src<<" "<<des<<endl;
        return ;
    }
    print(src,path[src][des]);
    print(path[src][des],des);

}
                                   /***  بسم الله الرحمن الرحيم😁  ***/   
int main() {
        fast
        int n,m;
        cin>>n>>m;
        memset(dis,OO,sizeof dis);
        memset(path,-1,sizeof path);
        for(int i=0;i<m;i++){
            int x,y,z;cin>>x>>y>>z;
            dis[x][y]=arr[x][y]=z;
        }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        for(int i=1;i<=n;i++)dis[i][i]=0;
        for(int k=1;k<=n;k++) for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)
            if(dis[i][j]>dis[i][k]+dis[k][j]){
                dis[i][j]=dis[i][k]+dis[k][j];
                path[i][j]=k;
            }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)cout<<path[i][j]<<" ";
            cout<<endl;
        }
        cout<<"path \n";
        print(1,4);
        
}

/*

Test
4 5
1 3 -2
3 4 2
4 2 -1
2 1 4
2 3 3 

*/
