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
int c;
int gcd(int x,int y){
	if(!y)return 0;
	if(c==1)printf(";");
	if(c>1)printf(",");
	c++;
	printf("%d",x/y);
	return  gcd(y,x%y);

}
int main()
{

	fast
	 int x,y;
	while(scanf("%d %d",&x,&y)==2){
		c=0;
		printf("[");
		gcd(x,y);
		printf("]\n");
	}
     return 0;
}


