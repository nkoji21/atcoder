#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    vector<bool> used(n);
    int cnt = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j] && !(used[j])) {
                used[j] = true;
                cnt++;
                break;
            }
        }
        
        if (cnt == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
}