//147 	Dollars
/***  بسم الله الرحمن الرحيم ***/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define RT(v) return cout<<v,0
#define sz(v) (int)(v.size())
#define all(v) v.begin(),v.end()

const int N=11,M=30005;
int coins [N]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
ll mem[N][M];
ll solve(int i,int rem){
  if(rem==0)return 1;
  if(rem<coins[i] || i==N)return 0;
  ll &ret=mem[i][rem];
  if(~ret)return ret;
  return ret =solve(i+1,rem)+solve(i,rem-coins[i]);
}
int main() {
    double num;
    memset(mem,-1,sizeof mem);
    while (scanf("%lf", &num), num > 0.0000001){
        printf("%6.2f%17lld\n", num, solve(0,static_cast<int>(num * 100 + 0.5)));
    }
}
