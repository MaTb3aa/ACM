#include <bits/stdc++.h>

using namespace std;


int mem[105][10005];
vector<int> arrwt,arrVal;

vector<int> sum ;

int solve(int num,int mxbag){
    if(num<0)return 0;
   
int &ret =mem[num][mxbag];
    if(~ret)return ret;
    ret=solve(num-1,mxbag);
    if(mxbag>=arrwt[num])ret=max(ret,solve(num-1,mxbag-arrwt[num])+arrVal[num]);

     return ret;
}


int main (){

    int t;
    cin>>t;
    while(t--){
int mxbag,num,x,y; 
  cin>>mxbag>>num;
  memset(mem,-1,sizeof mem);
  for(int i=0;i<num;i++){
     cin>>x>>y;
	arrwt.push_back(x);
	arrVal.push_back(y);
   }  
  cout<<"Hey stupid robber, you can get "<<solve(num-1,mxbag)<<"."<<endl;
   arrwt.clear();
   arrVal.clear();

 }


return 0;
}

