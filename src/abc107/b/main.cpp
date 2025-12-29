#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<vector<char>> a(H, vector<char>(W));
    
    // 入力を受け取る
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> a[i][j];
        }
    }
    
    vector<bool> goodRows(H), goodColumns(W);
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            // マスの色が黒だった場合
            if (a[i][j] == '#') {
                goodRows[i] = true;
                goodColumns[j] = true;
            }
        }
    }
    
    // 出力
    for (int i = 0; i < H; i++) {
        if (goodRows[i]) {
            for (int j = 0; j < W; j++) {
                if (goodColumns[j]) cout << a[i][j];
            }
            cout << endl;
        }
    }
}