#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    
    int m = INT_MIN;
    
    vector<int> a(n), b(k);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = max(m, a[i]);
    }
    for (int i = 0; i < k; i++) {
        cin >> b[i];
        b[i]--;
        
        if (a[b[i]] == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}