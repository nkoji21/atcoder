#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    vector<int> a(n), w(n);
    for (auto& x : a) cin >> x;
    for (auto& x : w) cin >> x;
    
    map<int, vector<int>> groups;
    for (int i = 0; i < n; i++) {
        groups[a[i]].push_back(w[i]);
    }
    
    int ans = 0;
    
    for (auto& [key, values] : groups) {
        if (values.size() >= 2) {
            sort(values.begin(), values.end());
            for (int i = 0; i < (int)values.size() - 1; i++) {
                ans += values[i];
            }
        }
    }
    
    cout << ans << endl;
}