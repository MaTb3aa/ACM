﻿#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<set>
#include<fstream>
#include<map>
#include<string>
#include <stdio.h>
#include<bitset>
#include<queue>
#include<iomanip>
#include<cmath>
#include<stack>
#include<climits>
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
#define MaTb3aa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v)          ((v).begin()), ((v).end())
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
typedef long long ll;
#define endl  "\n"

using namespace std;
void run(){
#ifndef ONLINE_JUDGE

	freopen("in.txt", "r", stdin);

#endif
}
int gcd(int x, int y){
	if (!y)return x;
	return gcd(y, x%y);
}

int main()
{
		run();
	MaTb3aa
		string s="";
	set<string>st;
	while (cin>>s)
	{
		string d = "";
		for (int i = 0; i < s.size(); i++){
			if (s[i] >= 'A'&&s[i] <= 'Z')s[i] += 32;
			if (isalpha(s[i])){ d += s[i]; }
			else { st.insert(d); d = ""; }
		}	
		st.insert(d);
	}
	
	set<string> ::iterator tt = st.begin();
	while (tt!=st.end())
	{
		cout << *tt;
		if (*tt != "")cout << endl;
		++tt;
	}

}


