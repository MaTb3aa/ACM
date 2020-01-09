#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int arr[50][50];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
//	fill(arr, arr + n, 0);
	vector<int>v;
	map<int, int>mp;
	int mx = INT_MIN;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){		
				mx = max(arr[i][j], mx);
			
		}
	
			v.push_back(mx); mx = INT_MIN; 
	}
	
	for (int i = 0; i < n; i++){
		if (mp[v[i]] == 0){
			mp[v[i]]++;
		}
		else v[i] = n;
		cout << v[i] << " ";
	}



	return 0;
}

