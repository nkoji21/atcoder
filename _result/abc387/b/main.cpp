#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> grid(9, vector<int>(9));
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = (i+1) * (j+1);
        }
    }
    
    int x;
    cin >> x;
    
    int ans = 0;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] != x) {
                ans += grid[i][j];
            }
        }
    }
    
    cout << ans << endl;
}