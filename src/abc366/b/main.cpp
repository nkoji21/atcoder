#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    
    int m = 0;
    for (int i = 0; i < n; i++) {
        m = max(m, (int)s[i].size());
    }
    
    // M * N の2次元作成
    vector<string> t(m, string(n, '*'));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (int)s[i].size(); j++) {
            t[j][n-1-i] = s[i][j];
        }
    }
    
    // 末尾の＊を削除
    for (int i = 0; i < m; i++) {
        while (t[i].back() == '*') t[i].pop_back();
        cout << t[i] << endl;
    }
}