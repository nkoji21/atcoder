#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c;
    cin >> n >> c;
    
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    
    int lastTime = t[0];
    int ans = 1;
    
    for (int i = 1; i < n; i++) {
        if (t[i] - lastTime >= c) {
            lastTime = t[i];
            ans++;
        }
    }
    
    cout << ans << endl;
}