#include <iostream>
#include <cmath>
#include <string>			
#include <algorithm>
#include <iomanip>
#include <bitset>
#include<vector>
#include <set>

/*MaTb3aa ^_^*/
using namespace std;

int main()
{

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	set<char>st;

	for (int i = 0; i < s.size(); i++)
	{
		st.insert(s[i]);
	}
	cout << (st.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
	return 0;
}