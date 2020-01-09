#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <functional>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

#define PI 3.14159265359
int arr[1000][1000];
int vis[26];
int ans[1000000];
/*MaTb3aa*/
using namespace std;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s, d;
	cin >> s >> d;
	for (int i = 0; i < d.length(); i++) {
		if (d[i] >= 'A'&&d[i] <= 'Z')d[i] += 32;
		if (s[i] >= 'A'&&s[i] <= 'Z')s[i] += 32;
	}
	if (s < d)cout << -1;
	else if (s > d)cout << 1;
	else cout << 0;


}
