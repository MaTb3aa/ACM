//#include "stdafx.h"
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
/*MaTb3aa*/
using namespace std;
int main()
{
	string s, x, y, k;
	getline(cin, s);
	int c = 0;
	int q = 0;
	for (int i = 0; i < s.length(); i++) {
		y += s[i];
		if (s[i] == ',' || s[i] == '?' || s[i] == '!' || s[i] == '.') { y += ' '; }
	}

	for (int i = 0; i < y.length(); i++) {
		if (y[i] != ' ') { x += y[i]; c = 0; }
		else if (y[i] == ' ') { c++; }
		if (c == 1) { x += ' '; }
	}
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == ' ' && (x[i + 1] == ',' || x[i + 1] == '.' || x[i + 1] == '?' || x[i + 1] == '!')){}
		else k += x[i];
	}

	cout << k;


}
