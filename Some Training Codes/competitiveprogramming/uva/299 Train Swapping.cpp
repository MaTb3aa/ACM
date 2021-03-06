#include<bits/stdc++.h>
using namespace std;
int arr[200005];

long long merge (int l,int r,int md){
	int i=l,j=md+1;
	long long invc=0;
	vector<int>v;
	while(i<=md&&j<=r){
		if(arr[i]<=arr[j])v.push_back(arr[i++]);
		else {invc+=((md+1)-i);
			v.push_back(arr[j++]);
		}
	}
	while(i<=md)v.push_back(arr[i++]);
	while(j<=r)v.push_back(arr[j++]);
	for (int i = r; i >=l;--i) {
		arr[i]=v.back();v.pop_back();
	}
	return invc;
}
long long mergeSort(int l,int r){
	int md=(l+r)/2;
	if(r-l<1)return 0;
	long long inv=0;
	inv+=mergeSort(l,md);
	inv+=mergeSort(md+1,r);
	inv+=merge(l,r,md);
	return inv;
}


int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for (int i = 0; i < n; ++i) {
			cin>>arr[i];
		}
		cout<<"Optimal train swapping takes "<<mergeSort(0,n-1)<<" swaps."<<endl;
	}

    return 0;
}

