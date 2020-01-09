#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
#define sz(v)               ((int)((v).size()))
#define ss	                second
#define ff	                first
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
#define MaTb3aa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v)          ((v).begin()), ((v).end())
typedef long long ll;

ll gcd(ll a, ll b){ return (b == 0 ? abs(a) : gcd(b, a%b)); }
#define endl  "\n"
/*MaTb3aa ^_^*/
using namespace std;
void run(){
#ifndef ONLINE_JUDGE

	freopen("in.txt", "r", stdin);

#endif
}
int chess[8][8];
int dx[] = { 1, -1, 1, -1, 2, -2, 2, -2 };
int dy[] = { 2, 2, -2, -2, 1, 1, -1, -1, };
bool valid(int  x, int y){ return x >= 0 && y >= 0 && x < 8 && y < 8; }
char a, b;
int c, d;
int BFS(int x1, int y1, int x2, int y2){
	memset(chess, -1, sizeof(chess));
	chess[x1][y1] = 0;

	queue<int>q;
	q.push(x1);
	q.push(y1);
	while (!q.empty())
	{
		int a = q.front();
		q.pop();
		int b = q.front();
		q.pop();
		if (a == x2&&b == y2)return chess[x2][y2];
		for (int i = 0; i < 8; i++){
			int ddx = a + dx[i];
			int ddy = b + dy[i];
			if (valid(ddx, ddy) && chess[ddx][ddy] == -1){
				chess[ddx][ddy] = (chess[a][b]) + 1;
				q.push(ddx); q.push(ddy);
			}
		}
	}
	return -1;
}

/*The future is for those who believe in the beauty of their dreams.*/
int main()
{
	//run();
	MaTb3aa
		/*    In_the_name_of_allah_the_merciful */
		char st1[5], st2[5];
	while (scanf("%s%s", st1, st2) != EOF){
		c--;
		d--;
		int ans = BFS(st1[1] - '1', st1[0] - 'a', st2[1] - '1', st2[0] - 'a');

		printf("To get from %s to %s takes %d knight moves.\n", st1, st2, ans);
	}

	/*    Alhamdulillah   */
	return 0;
}