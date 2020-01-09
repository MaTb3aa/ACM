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
		string s;
	while (cin >> s){
		string d = s;
		sort(all(s));
		//cout << s << " " << d << endl;
		if (s != d){ cout << 0<<endl; }
		else {
			bool f = 0;
			if (s.size() == 1){
				for (int i = 1; i <= 26; i++){
					if (s[0] == char('a' + i - 1)){ cout << i << endl; f = 1; }
					if (f == 1)break;
				}
			}
			else if (s.size() == 2){
				int c = 27;
				for (int i = 1; i <= 26; i++){
					for (int j = i + 1; j <= 26; j++){
						if (s[0] == char('a' + i - 1) && s[1] == char('a' + j - 1)){ f = 1; cout << c << endl; break; }
						else c++;
					}
					if (f == 1)break;
				}
			}
			else if (s.size() == 3){
				int c = 352;
				for (int i = 1; i <= 26; i++){
					for (int j = i + 1; j <= 26; j++){
						for (int k = j + 1; k <= 26; k++){
							if (s[0] == char('a' + i - 1) && s[1] == char('a' + j - 1) && s[2] == char('a' + k - 1)){ f = 1; cout << c << endl; break; }
							else c++;
						}
						if (f == 1)break;
					}
					if (f == 1)break;
				}
			}
			else if (s.size() == 4){
				int c = 2952;
				for (int i = 1; i <= 26; i++){
					for (int j = i + 1; j <= 26; j++){
						for (int k = j + 1; k <= 26; k++){
							for (int l = k + 1; l <= 26; l++){
								if (s[0] == char('a' + i - 1) && s[1] == char('a' + j - 1) && s[2] == char('a' + k - 1) && s[3] == char('a' + l - 1)){ f = 1; cout << c << endl; break; }
								else c++;
							}
							if (f == 1)break;
						}
						if (f == 1)break;
					}
					if (f == 1)break;
				}
			}
			else if (s.size() == 5){
				int c = 17902;
				for (int i = 1; i <= 26; i++){
					for (int j = i + 1; j <= 26; j++){
						for (int k = j + 1; k <= 26; k++){
							for (int l = k + 1; l <= 26; l++){
								for (int p = l + 1; p <= 26; p++){
									if (s[0] == char('a' + i - 1) && s[1] == char('a' + j - 1) && s[2] == char('a' + k - 1) && s[3] == char('a' + l - 1) && s[4] == char('a' + p - 1)){ f = 1; cout << c << endl; break; }
									else c++;
								}
							}
							if (f == 1)break;
						}
						if (f == 1)break;
					}
					if (f == 1)break;
				}
			}
		
		}
	}
	/*    Alhamdulillah   */
	return 0;
}