#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    
    int curY, curX;
    cin >> curY >> curX;
    
    curY--; curX--; // 添え字が0スタートのため 
    
    vector<vector<char>> grid(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }
    
    string X;
    cin >> X;

    for (int i = 0; i < (int)X.size(); i++) {
        if (X[i] == 'L' && curX > 0 && grid[curY][curX - 1] == '.') curX--;
        else if (X[i] == 'R' && curX < w - 1 && grid[curY][curX + 1] == '.') curX++;
        else if (X[i] == 'U' && curY > 0 && grid[curY - 1][curX] == '.') curY--;
        else if (X[i] == 'D' && curY < h - 1 && grid[curY + 1][curX] == '.') curY++;
    }
    
    cout << curY + 1 << ' ' << curX + 1 << endl;
}