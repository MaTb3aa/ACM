/*  MaTb3aa  */
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5, M = 1e4 + 5, OO = 0x3f3f3f3f;
typedef long long ll;
#define all(v) v.begin(),v.end()
bool Error(vector<pair<int,int>>v){
	map<int,int>mp;
	for (int i = 0; i < v.size(); ++i) {
		if(v[i].first==1)mp[v[i].second]++;
		else {
			if(mp[v[i].second]==0)return 1;
			else mp[v[i].second]--;
		}
	}
	return 0;
}
bool stackk(vector<pair<int,int>>v){
	stack<int>st;
	for (int i = 0; i < v.size(); ++i) {
				if(v[i].first==1)st.push(v[i].second);
				else {
					if(v[i].second!=st.top())return 0;
					st.pop();
				}
			}
			return 1;
}
bool queu(vector<pair<int,int>>v){
	queue<int>q;
		for (int i = 0; i < v.size(); ++i) {
			if(v[i].first==1)q.push(v[i].second);
			else {
				if(v[i].second!=q.front())return 0;
				q.pop();
			}
		}
		return 1;
}
bool prqueu(vector<pair<int,int>>v){
	priority_queue<int>p;
		for (int i = 0; i < v.size(); ++i) {
			if(v[i].first==1)p.push(v[i].second);
			else {
				if(v[i].second!=p.top())return 0;
				p.pop();
			}
		}
		return 1;
}
int main() {
	fast
	int n;
	while(cin>>n){
		vector<pair<int,int>>v(n);
		for (int i = 0; i < n; ++i) {
			cin>>v[i].first>>v[i].second;
		}
		if(!Error(v)){
		bool a=queu(v),b=prqueu(v),c=stackk(v);
			if((a&&b)||(a&&c)||(b&&c))cout<<"not sure\n";
			else if(a)cout<<"queue\n";
			else if(b)cout<<"priority queue\n";
			else if(c)cout<<"stack\n";
			else cout<<"impossible\n";
		}
		else cout<<"impossible\n";
	}

	return 0;
}

