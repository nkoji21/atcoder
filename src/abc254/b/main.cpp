#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if (j == 0 || j == i) {
                ans[i][j] = 1;
            } else {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    } 
}