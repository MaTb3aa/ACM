#include <bits/stdc++.h>

using namespace std;


int mem[105][10005];

vector<int> sum ;

int solve(int racks,int stom){
    if(racks<0)return 0;
   
int &ret =mem[racks][stom];
    if(~ret)return ret;
    ret=solve(racks-1,stom);
    if(stom>=sum[racks])ret=max(ret,solve(racks-1,stom-sum[racks])+sum[racks]);

     return ret;
}






int main (){

    int t;
    cin>>t;
    while(t--){

int racks,stom,all=0; 
  cin>>racks>>stom;
  memset(mem,-1,sizeof mem);
  for(int i=0;i<racks;i++){
      
      int x;
	  cin>>x;
	  while (x--){
	        int dish;
	        cin>>dish;
	        all+=dish;
        }
      sum.push_back(all);
      all=0;
   }  
   cout<<solve(racks-1,stom)<<endl;
   sum.clear();


 }


return 0;
}

