#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    vector<string> c(n);
    for (auto& x : c) cin >> x;
    
    vector<string> d(m);
    for (auto& x : d) cin >> x;
    
    vector<int> p(m+1);
    for (auto& x : p) cin >> x;
    
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (c[i] == d[j]) {
                ans += p[j+1];
                flag = false;
            }
        }
        if (flag) ans += p[0];
    }
    
    cout << ans << endl;
}