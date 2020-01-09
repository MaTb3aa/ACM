#include <bits/stdc++.h>
using namespace std;

int main (){

int seed=0,seed1,mod,step;
while (cin>>step>>mod) {


int arr[100005];
memset(arr,-1,sizeof arr);
for(int i=0;i<=mod;i++){
  seed1=(seed+step)%mod;
  arr[seed1]=seed1;
  seed=seed1;

}
int ctr=0;
for(int i=0;i<mod;i++){
  if(arr[i]==-1){ctr=1;break;}
}
//cout<<"      9999         9    Bad Choice\n";

int lenStp=0,tst1=step,tst2=mod,lenMod=0;
while (tst1>0) {
tst1/=10;lenStp++;
}
while (tst2>0) {
tst2/=10;lenMod++;
}
for(int i=0;i<10-lenStp;i++){
  cout<<" ";
}
cout<<step;
for(int i=0;i<10-lenMod;i++){
  cout<<" ";
}
cout<<mod;

if(ctr==0){
cout<<"    Good Choice\n\n";
}
else
cout<<"    Bad Choice\n\n";
}
  return 0;
}

