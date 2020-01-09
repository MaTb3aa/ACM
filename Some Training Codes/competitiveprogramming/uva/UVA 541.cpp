#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define MaTb3aa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v)          ((v).begin()), ((v).end())
typedef long long ll;
#define endl  "\n"
//ll x = bts.to_llong

/*MaTb3aa ^_^*/
using namespace std;
void run(){
#ifndef ONLINE_JUDGE

	freopen("in.txt", "r", stdin);

#endif
}
	int check(vector<vector<int>>v,int n){
		int c = 0, ans = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (v[i][j] == 1)c++;
			}
			if (c & 1)return 0;
			else c = 0;
		}
		 c = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (v[j][i] == 1)c++;
			}
			if (c & 1)return 0;
			else c = 0;
		}
		return 1;
	}
int main()
{
	//run();
	MaTb3aa
		int n;
	while (cin>>n&&n!=0)
	{
		bool pp = 0;
		vector<vector<int>>v(n, vector<int>(n));
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> v[i][j];
			}
		}
		if (check(v, n)){
			cout << "OK\n"; continue;
		}
		else {
			int  cc = 0; int row = 0;
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (v[i][j] == 1)cc++;
				}
				row++;
				if (cc & 1)break;
			
			}		
			/*Why ?! row make a problem when i make it row not row-1 */
			for (int k = 0; k < n; k++){		
				if (v[row-1][k] == 0){
					v[row-1][k] = 1;
					if (check(v, n)){ cout << "Change bit (" << row  << "," << k + 1 << ")\n"; pp = 1; break; }
					v[row-1][k] = 0;
				}
			else {
					v[row-1][k] = 0;
					if (check(v, n)){ cout << "Change bit (" << row  << "," << k + 1 << ")\n"; pp = 1; break; }
					v[row-1][k] = 1;
				}
			}
	
		}
		if (pp == 0){
			cout << "Corrupt\n";
		}

	}
	

}
