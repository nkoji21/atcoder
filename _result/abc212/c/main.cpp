#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    
    // 入力を受け取る
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    // ソート
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 1e9;
    
    // カーソルを設定
    int ai = 0, bi = 0;
    
    // カーソルが要素数の中にあるまで
    while (ai < n && bi < m) {
        ans = min(ans, abs(a[ai] - b[bi]));
        
        if (a[ai] < b[bi]) ai++;
        else bi++;
    }
    
    cout << ans << endl;
}