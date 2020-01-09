//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
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

int main()
{
	fast
	ll t;cin>>t;
	while(t--){
		ll x;cin>>x;
		ll xx=x*2;
		ll a=sqrt((xx))-1,b=sqrt(xx),c=sqrt((xx))+1;
		ll aa=a*(a+1)/2,bb=b*(b+1)/2,cc=c*(c+1)/2;

		if(x>=aa&&x<=aa+a){cout<<a<<endl;}
		else if(x>=bb&&x<=bb+b){cout<<b<<endl;}
		else if(x>=cc&&x<=cc+a){cout<<c<<endl;}

	}

     return 0;
}


