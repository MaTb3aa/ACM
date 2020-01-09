/***  بسم الله الرحمن الرحيم ***/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

std::vector< set<pair<string,int> > > v;
map<string,bool>mp;
bool valid(string s){
    while (s.size()) {
      s.pop_back();
      pair<string,int>p{s,-1};
      auto t=v[s.size()].lower_bound(p);
      if(t==v[s.size()].end() || t->first!=s){
        return 0;
      }
    }
    return 1;
}
int mx,cnt;
bool ok;
void go(string s){
  s.pop_back();
  s.erase(0,1);
  istringstream ss(s);
  pair<string,int>p;
  ss>>p.second;ss>>p.first;
  p.first = p.first.substr(1);
  v[p.first.size()].insert(p);
  mx=max(mx,(int)p.first.size());
  if(mp.find(p.first)!=mp.end())ok=0;
  if(p.first=="")cnt++;
  mp[p.first]=1;
}
int main(){
    string s;
    while (cin>>s) {
      mx=0;v.clear();v.resize(300);
      ok=1;mp.clear();cnt=0;go(s);
      while (cin>>s) {
          if(s=="()")break;
          go(s);
      }
      std::vector<int> ans;
      for(int i=0;i<=mx;i++){
        for(auto t :v[i]){
          if(!valid(t.first))ok=0;
          ans.push_back(t.second);
        }
      }
      if(!ok||cnt>1)cout<<"not complete";
      else {
        for(int i=0;i<ans.size();i++){
          if(i!=ans.size()-1)cout<<ans[i]<<" ";
          else cout<<ans[i];
        }
      }
      cout<<endl;
    }

  return 0;
}
