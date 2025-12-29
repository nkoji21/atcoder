#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    cin.ignore(); // 入力した行の改行を無視
    
    string a;

    // start
    for (int i = 0; i < W + 2; i++) {
        if (!(i == W + 1)) {
            cout << '#';
        } else {
            cout << '#' << endl;
        }
    }

    // 画像のピクセル出力
    for (int i = 0; i < H; i++) {
        getline(cin, a);
        cout << '#' << a << '#' << endl;
    }
    
    // end
    for (int i = 0; i < W + 2; i++) {
        if (!(i == W + 1)) {
            cout << '#';
        } else {
            cout << '#' << endl;
        }
    }
}