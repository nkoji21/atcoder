#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, D;
    cin >> H >> W >> D;
    
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];
    
    int ans = 0;
    
    // 1個目の加湿器
    for (int i1 = 0; i1 < H; i1++) {
        for (int j1 = 0; j1 < W; j1++) {
            if (S[i1][j1] == '#') continue;

            // 2個目の加湿器
            for (int i2 = 0; i2 < H; i2++) {
                for (int j2 = 0; j2 < W; j2++) {
                    if (S[i2][j2] == '#' || (i1 == i2 && j1 == j2)) continue;
                    
                    int cnt = 0;
                    for (int i = 0; i < H; i++) {
                        for (int j = 0; j < W; j++) {
                            if (S[i][j] == '#') continue;
                            
                            bool humid = false;
                            if (abs(i-i1)+abs(j-j1) <= D) humid = true;
                            if (abs(i-i2)+abs(j-j2) <= D) humid = true;
                            
                            if (humid) cnt++;
                        }
                    }
                    ans = max(ans, cnt);
                }
            }
            
        }
    }
    
    cout << ans << endl;
}