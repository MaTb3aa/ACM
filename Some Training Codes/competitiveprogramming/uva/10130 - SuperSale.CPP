#include <bits/stdc++.h>

using namespace std;

const int N=10005,G=35;
int mem [N][N];
int w[N],p[N];

int solve(int idx,int wt){
  if(idx<0)return 0;
  int & ret=mem[idx][wt];
  if(mem[idx][wt]!=-1)return mem[idx][wt];
    ret=solve(idx-1,wt);
  if (wt>=w[idx]){ret=max(ret,solve(idx-1,wt-w[idx])+p[idx]);}

  return ret=mem[idx][wt];
}
int main (){

int t;
cin>>t;
while (t--) {
  int idx,persoins;
  long long sum=0;
  memset(mem,-1,sizeof mem);
  cin>>idx;
  for (size_t i = 0; i < idx; i++) {
    cin>>p[i]>>w[i];
  }
  cin>>persoins;
  while (persoins--) {
  int bag;
  cin>>bag;
sum+=solve(idx-1,bag);
  }
  cout<<sum<<endl;

}
return 0;
}

