#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> ans;
    
    // 後ろからk番目からアクセス
    for (int i = (int)a.size() - k; i < (int)a.size(); i++) {
        ans.push_back(a[i]);
    }
    
    // 後ろからk番目までアクセス
    for (int i = 0; i < (int)a.size() - k; i++) {
        ans.push_back(a[i]);
    }
    
    // 出力
    for (int& card : ans) cout << card << ' ';
}