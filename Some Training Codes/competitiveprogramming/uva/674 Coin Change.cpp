#include <bits/stdc++.h>
using namespace std;
long long mem[100005][100];
int unit []={1,5,10,25,50};
long long solve (int m,int idx){
if(idx<0)return 0;
if(m<0)return 0;
if(m==0)return 1;
long long &ret=mem[m][idx];
if(~mem[m][idx]){return ret;}
ret=solve(m-unit[idx],idx)+solve(m,idx-1);
return ret;

}


int main(){
memset(mem,-1,sizeof mem);
int m;
while(cin>>m){
cout<<solve(m,4)<<endl;
}

	return 0;
}


