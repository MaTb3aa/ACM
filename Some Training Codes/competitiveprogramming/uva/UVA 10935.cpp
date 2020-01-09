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


int main()
{
	//run();
	MaTb3aa
		int n;
	while (cin >> n&&n != 0){
		deque<int>q;
		for (int i = 1; i <= n; i++){
			q.push_back(i);
		}
		if (n == 1){
			cout << "Discarded cards: " << endl;
			cout << "Remaining card: 1"<< endl;
		}
		else
		{

			cout << "Discarded cards: ";
			while (q.size() > 1){
				if (q.size() > 2)
					cout << q[0] << ", ";
				else
					cout << q[0];
				q.pop_front();
				int x = q[0];
				q.push_back(x);
				q.pop_front();

			}
			cout  <<endl<<"Remaining card: " << q[0] << endl;
		}
			
	}

}
