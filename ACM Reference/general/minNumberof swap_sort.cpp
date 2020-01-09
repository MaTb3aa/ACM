#include <bits/stdc++.h>
/*
 **
 Success doesn't come to you ,
 You Go To IT .
 **
 */
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define finish(x) return cout << x << endl, 0;
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
 
 
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
 
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
 
int main()
{
    Compiler_Beso
    
    int n;
    cin>>n;
    vector<int>v(n),vv,vvv,v1;
    map<int,int>mp,mp1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=i;
        mp1[v[i]]=i;
    }
    int mn1=0,mn2=0;
    vv=v;
    v1=v;
    sort(all(vv));
    vvv=vv;
    reverse(all(vvv));
    for(int i=0;i<n;i++){
        if(v[i]!=vv[i]){
            mp[v[i]]=mp[vv[i]];
            swap(v[i], v[mp[vv[i]]]);
            mn1++;
        }
    }
    for(int i=n-1;i>0;i--){
        if(v1[i]!=vvv[i]){
            mp1[v1[i]]=mp1[vvv[i]];
            swap(v1[i], v1[mp1[vvv[i]]]);
            mn2++;
        }
    }
    cout<<min(mn1,mn2);
    
    
    return 0;
}