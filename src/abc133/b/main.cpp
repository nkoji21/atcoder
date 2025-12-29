#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<vector<int>> points(N, vector<int>(D));
    
    // 座標の入力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> points[i][j];
        }
    }
    
    int count = 0;
    
    // 2点間の距離の2乗をチェック
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            
            int dist_squared = 0; // 2点間の距離
            
            for (int k = 0; k < D; k++) {
                int diff = points[i][k] - points[j][k];
                dist_squared += diff * diff;
            }
            
            // 距離の平方根が整数かどうか
            int route = sqrt(dist_squared);
            
            if (route * route == dist_squared) {
                count++;
            }
        }
    }
    
    cout << count << endl;
}