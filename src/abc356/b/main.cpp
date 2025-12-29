#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    
    vector<vector<int>> x(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
        }
    }
    
    int cnt = 0;
    
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += x[j][i];
        }
        
        if (sum >= a[i]) cnt++;
    }
    
    if (cnt >= m) cout << "Yes" << endl;
    else cout << "No" << endl;
}