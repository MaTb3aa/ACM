//============================================================================
// Name        : ICPC.cpp
// Author      : MaTb3aa
// Quotes      : Nothing is impossible, the word itself says 'I'm possible'!.
// Copyright   : Audrey Hepburn
// Description : You Can Do It
//============================================================================
#include<bits/stdc++.h>
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
const int N = 1e5 + 5, M = 1e3 + 5, OO = 0x3f3f3f3f , MOD =1e9+7;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define all(v) ((v).begin()), ((v).end())
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
typedef long long ll;
#define endl '\n'
#define S second
#define F first
int g[105][105];
int main()
{
	fast
	int t;cin>>t;
	while(t--){
		memset(g,0,sizeof g);

		int n,m,k;
		cin>>n>>m>>k;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin>>g[i][j];
				g[i][j]+=g[i-1][j]+g[i][j-1]-g[i-1][j-1];
			}
		}
		int ans=0;
		for (int x1 = 0; x1 < n; ++x1) {
			for (int y1 = 0; y1 < m; ++y1) {
				for (int x2 = n-1; x2 >=x1; --x2) {
					for (int y2 = m-1; y2 >=y1; --y2) {
						int sum = g[x2][y2]-g[x1-1][y2]-g[x2][y1-1]+g[x1-1][y1-1];
						int a=abs(y1-y2)+1;
						int b=abs(x1-x2)+1;
						if(sum<=k)ans=max(ans,a*b);
					}
				}
			}
		}
		cout<<ans<<endl;
	}



	 return 0;
}


