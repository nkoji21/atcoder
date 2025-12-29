#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    
    sort(a.begin(), a.end());
    
    int ans = a[0];
    
    for (int i = 0; i <= (int)a.size() - 1; i++) {
        if (ans != a[i]) {
            cout << ans << endl;
            return 0;
        }
        ans++;
    }
}