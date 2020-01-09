#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
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


int main()
{
	//run();
	MaTb3aa
	int n;
	cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
 cin>>arr[i];
}

vector<int>mem(n,1);
for(int i=1;i<n;i++){
for(int j=0;j<i;j++){
if(arr[j]<arr[i]&&mem[j]+1>mem[i])mem[i]++;
}
}
cout<<*max_element(all(mem));

	return 0;
}

