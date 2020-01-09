#include <bits/stdc++.h>

using namespace std;

vector<int>v;
int merge(int l, int r, int md) {
    int i = l, j = md + 1;
    vector<int>vv;
    int cnt = 0;
    while (i <= md && j <= r) {
        if (v[i] < v[j]) vv.push_back(v[i++]);
        else {
            vv.push_back(v[j++]);
            cnt += (md - i-1);
        }
    }
    while (i <= md)vv.push_back(v[i++]);
    while (j <= r)vv.push_back(v[j++]);
    for (int i = r; i >= l; i--) {
        v[i] = vv.back();
        vv.pop_back();
    }
    return cnt;
}
int merge_sort(int l, int r) {
    int md = l + r >> 1;
    int inv = 0;
    if (r > l) {
        inv = merge_sort(l, md);
        inv += merge_sort(md + 1, r);
        inv += merge(l, r, md);
    }
    return inv;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        
        int n; cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        int x = merge_sort(0, n - 1);
        if (x & 1)cout << "NO\n";
        else cout << "YES\n";
        
    }
}