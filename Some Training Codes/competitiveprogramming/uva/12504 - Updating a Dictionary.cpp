#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll_str(x,y) stringstream sdf;sdf<<x;string str=sdf.str();y=str;
#define str_ll(x,y) stringstream sstr(x);ll val;sstr>>val;y=val;
#define sz(v)               ((int)((v).size()))
#define ss	                second
#define ff	                first
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
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
/*The future is for those who believe in the beauty of their dreams.*/

int main()
{
	//run();
	MaTb3aa
		/*    In_the_name_of_allah_the_merciful */
		int t;
	cin >> t;
	while (t--)
	{
		string s, d;
		cin >> s >> d;
		vector<string>oldd, newd,plus,minus;
		map<string, string>mp_old, mp_new;
		set<string>change;
		oldd.clear(); newd.clear(); plus.clear(); minus.clear(); change.clear();
		string a="", b="";
		for (int i = 0; i < s.size(); i++){
			if (s[i] >= 'a'&&s[i] <= 'z'){ a += s[i]; }
			else if (s[i] >= '0'&&s[i] <= '9')b += s[i];
			else if (s[i] == ',' || s[i] == '}'){ mp_old[a] = b;  oldd.push_back(a); a = ""; b = ""; }

		}
		for (int i = 0; i < d.size(); i++){
			if (d[i] >= 'a'&&d[i] <= 'z'){ a += d[i]; }
			else if (d[i] >= '0'&&d[i] <= '9')b += d[i];
			else if (d[i] == ',' || d[i] == '}'){ mp_new[a] = b; newd.push_back(a); a = ""; b = ""; }

		}

		for (int i = 0; i < newd.size(); i++){
			if (mp_old.find(newd[i]) == mp_old.end()&&newd[i]!="")plus.push_back(newd[i]);
			else if (mp_old.find(newd[i]) != mp_old.end() && mp_old[newd[i]] != mp_new[newd[i]] && newd[i] != "")change.insert(newd[i]);
		}
		for (int i = 0; i < oldd.size(); i++){
			if (mp_new.find(oldd[i]) == mp_new.end()&&oldd[i]!="")minus.push_back(oldd[i]);
			else if (mp_new.find(oldd[i]) != mp_new.end() && mp_old[oldd[i]] != mp_new[oldd[i]]&&oldd[i]!="")change.insert(oldd[i]);
		}

		sort(all(plus));
		sort(all(minus));
		if (plus.size() == 0 && minus.size() == 0 && change.size() == 0)cout << "No changes\n";
		else {
			if (!plus.empty()){
				cout << "+";
				for (int i = 0; i < plus.size(); i++){
					 if (i  != plus.size()-1)cout << plus[i] << ",";
					else cout << plus[i]<<endl;
				}
			}
			if (!minus.empty()){
				cout << "-";
				for (int i = 0; i < minus.size(); i++){
					if (i  != minus.size()-1)cout << minus[i] << ",";
					else cout << minus[i]<<endl;
				}
			}
			if (!change.empty()){
				set<string> ::iterator it = change.begin(), itd = change.end(); itd--;
				cout << "*";
				while (it!=change.end())
				{
					if (it != itd)cout << *it << ",";
					else cout << *it << endl;
					it++;
				}

			}
		}
		cout << endl;

	}
	/*    Alhamdulillah   */
	return 0;
}