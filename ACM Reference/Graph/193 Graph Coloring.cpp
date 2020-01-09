//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define endl                         '\n'	
#define Ceil(x,y)             ((x+y-1)/y)
#define sz(s)               (int)s.size()
#define RT(x)           return cout<<x,0;
#define mem(x,y)    memset(x,y,sizeof(x))
#define all(v) ((v).begin()), ((v).end())
#define vi                    vector<int>
#define pii                 pair<int,int>
#define forr(i, n) for (int i = 0; i < int(n); i++)
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int ddx[] = { -1,0,1 };
const double pi = acos(-1), eps = 1e-9;
const int OO = 0x3f3f3f3f, N = 1e6 + 5, mod = 1e9 + 7;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll x, ll y) { return (!y) ? x : gcd(y, x%y); }
ll lcm(ll x, ll y) { return ((x / gcd(x, y))*y); }

void file() {
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE*/
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int n, m;
vector<vector<int>>g;
int color[N],black=1,white=2;
bool canB(int u){
    for(auto t : g[u])
        if(color[t]==black)return 0;
    return 1;
}
vector<int>curB,mxB;
void Backtrack(int cur){

    if(sz(curB)>sz(mxB) )mxB=curB;
    if(cur==n)return;
    
    int mx_poss_b=n-cur;
    
    if(mx_poss_b+sz(curB)<=sz(mxB))return ;
    for(int i=cur;i<n;i++){
        if(canB(i)){
                color[i]=black;
                curB.push_back(i);
                Backtrack(i+1);
                curB.pop_back();
                color[i]=white;        
        }
    }


}
int main() {
	file();
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		g.clear(); 
		g.resize(n);
		curB.clear();
		mxB.clear();
		mem(color,0);
		int x, y;
		for (int i = 0; i < m; i++) {
			cin >> x >> y;
			--x; --y;
			g[x].push_back(y);
			g[y].push_back(x);
		}

		Backtrack(0);
		cout<<sz(mxB)<<endl;
		for(int i=0;i<sz(mxB)-1;i++)cout<<mxB[i]+1<<" ";
		cout<<mxB.back()+1<<endl;
	}
		
	return 0;
}
