
 #include <bits/stdc++.h>
 using namespace std;
 const int K=1e4+5,M=50+5;
 int mem[M][K];

 int arrWt[K],arrVal[M];

 int solve(int idx,int RemWt){

 if(idx==-1)return 0;

 if(mem[idx][RemWt]!=-1)return mem[idx][RemWt];

 int ret=solve(idx-1,RemWt);

 if(RemWt>=arrWt[idx])ret=max(ret,solve(idx-1,RemWt-arrWt[idx])+arrVal[idx]);


       return mem[idx][RemWt]=ret;

}

int main(){
 memset(mem,-1,sizeof mem);

 int mxWat,bags;

 cin>>mxWat>>bags;
  for(int i=0;i<bags;i++){

     cin>>arrWt[i]>>arrVal[i];
  }
 cout<<"ans is "<<solve(bags-1,mxWat)<<endl;

	return 0;
}
/*
1
34 5
178 12
30 1
13 7
34 8
87 6
*/
