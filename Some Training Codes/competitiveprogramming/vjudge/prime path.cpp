#include <iostream>
#include "bits/stdc++.h"
const int OO=0x3f3f3f3f;
using namespace std;
vector<int>prims;
vector<int>v[10000];
bool prime[10000];
//iota(prims,prims+1,1);
void Sieve(int n=9999)
{
 
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {
            

            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
              
        }
    }
    for(int i=1000;i<=9999;i++)if(prime[i])prims.push_back(i);
 
}
int des[10000];
int vis[10000];
void BFS(int st){

vis[st]=1;
des[st]=0;
queue<int>q;q.push(st);
    while(!q.empty()){
        int node=q.front();q.pop();
        for(int i=0;i<v[node].size();i++){
            int ch=v[node][i];
            if(!vis[ch]){des[ch]=des[node]+1;vis[ch]=1;q.push(ch);}
        }
    }
}

int main()
{
    

    Sieve();
   
        for(int i=0;i<prims.size();i++){
            for(int a=0;a<4;a++){
                for(int b=0;b<=9;b++){
                       int nw=prims[i];
                       if(a==0){nw/=10;nw*=10;nw+=b;  }
                       
                       else if(a==1){int x=nw%10;nw/=100;nw*=10;nw+=b;nw*=10;nw+=x;}
                       
                       else if(a==2){int x=nw%10;nw/=10;int y=nw%10;nw/=100;
                       nw*=10;nw+=b;nw*=10;nw+=y;nw*=10;nw+=x;
                       }
                       
                       else if(a==3&&b>0){int x=nw%10;nw/=10;int y=nw%10;nw/=10;int z=nw%10;nw/=10;
                       nw=b;nw*=10;nw+=z;nw*=10;nw+=y;nw*=10;nw+=x; 
                    
                       }
                            if(prime[nw]&&prims[i]!=nw)v[prims[i]].push_back(nw);
                             //   cout<<prims[i]<<" "<<nw<<endl;      
                        
                    }
                }
            }          
int t;cin>>t;
        while(t--){
    memset(vis,0,sizeof vis);
    memset(des,OO,sizeof des);
        
        int from,to;
        cin>>from>>to;
        BFS(from);
        cout<<des[to]<<endl;
        
        }
      
     
    
    
   

    
    
    return 0;
}
