#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W;
    cin >> H >> W;
    
    // 入力用の二次元配列
    vector<string> grid(H);
    
    // 入力を受け取る
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    // 中心からの八方向 (0時の方向から時計回り)
    int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
    
    // 出力用の二次元配列
    vector<string> result = grid;
    
    // 各マスの爆弾を探す
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            
            // そのマスに爆弾がなかった場合
            if (grid[i][j] == '.') {
                
                int cnt = 0;
                
                // 8方向の隣接マスを確認
                for (int k = 0; k < 8; k++) {
                    int x = j + dx[k];
                    int y = i + dy[k];
                    
                    if (x >= 0 && x < W && y >= 0 && y < H && grid[y][x] == '#') {
                        cnt++;
                    }
                }
                // int -> char
                result[i][j] = cnt + '0';
            }
        }
    }
    
    // 出力
    for (int i = 0; i < H; i++) {
        cout << result[i] << endl;
    }
}