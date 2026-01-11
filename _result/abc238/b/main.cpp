#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> cut;
    cut.push_back(0);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        cut.push_back(sum % 360);
    }
    
    cut.push_back(360);
    
    sort(cut.begin(), cut.end());
    
    int ans = 0;
    for (int i = 0; i < cut.size() - 1; i++) {
        ans = max(ans, cut[i+1]-cut[i]);
    }
    
    cout << ans << endl;
}