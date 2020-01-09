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
const int N = 3e5 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f;
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
	ll x,y;
	while(cin>>x>>y){
		if(x==0&&y==0)break;
		int ctr=0,cary=0;
		while(x||y){
			cary+=x%10+y%10;
			cary/=10;
			ctr+=cary;
			x/=10;y/=10;
		}
		if(!ctr)cout<<"No carry operation.\n";
		else if(ctr==1)cout<<"1 carry operation.\n";
		else cout<<ctr<<" carry operations.\n";
	}


     return 0;
}

