//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e4 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define all(v) ((v).begin()), ((v).end())
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
ll Divisor(ll x){
	ll sum=0;
	for (int i = 2; i*i < x; ++i) {
		if(x%i==0){sum+=i;sum+=x/i;}
		if(i*i==x)sum+=i;
	}
	return sum+1;
}

int arr[60005];
int main()
{
	fast
	int ctr=0,x;
	while(cin>>x&&x!=0){
		arr[ctr++]=x;
	}
	cout<<"PERFECTION OUTPUT\n";
	for (int i = 0; i < ctr; ++i) {
		if(arr[i]==1){cout<<setw(5)<<arr[i]<<"  "<<"DEFICIENT\n";continue;}
		cout<<setw(5)<<arr[i]<<"  ";
		if(Divisor(arr[i])==arr[i])cout<<"PERFECT\n";
		else if(Divisor(arr[i])<arr[i])cout<<"DEFICIENT\n";
		else cout<<"ABUNDANT\n";
	}
	cout<<"END OF OUTPUT\n";
     return 0;
}

