/*  MaTb3aa  */
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5, M = 1e4 + 5, OO = 0x3f3f3f3f;
typedef long long ll;
int vis[100];
int cur[100];
int n;
void perm(int i, int n) {

	if (i == n) {
		for (int j = 0; j < n; j++)
			cout << cur[j] << " ";
		cout << endl;
		return;
	}
	for (int j = 0; j < n; j++)
		if (!vis[j]) {

			vis[j] = 1;
			cur[i] = j+1;
			perm(i + 1,n);
			vis[j] = 0;

		}

}
int main() {
	int x;
	cin >> x;
	perm(0,x);

	return 0;
}

