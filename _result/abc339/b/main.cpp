#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    
    vector<string> grid(h, string(w, '.'));
    
    // 向きに対する移動
    vector<int> di = {-1, 0, 1, 0};
    vector<int> dj = {0, 1, 0, -1};
    
    int ni = 0, nj = 0, v = 0;
    for (int i = 0; i < n; i++) {
        if (grid[ni][nj] == '.') {
            grid[ni][nj] = '#';
            v += 1;
        } else {
            grid[ni][nj] = '.';
            v += 3;
        }
        v %= 4;
        
        ni += di[v];
        nj += dj[v];
        
        // トーラス状
        ni = (ni + h) % h;
        nj = (nj + w) % w;
    }
    
    for (string s : grid) cout << s << endl;
}