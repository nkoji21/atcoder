#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    
    bool same = true; // 同じ数字の場合true
    bool step = true; // 隣接した数字が次の数字の場合true

    for (int i = 0; i < 3; i++) {
        
        // 4桁同じ数字
        if (x[i] != x[i+1]) {
            same = false;
        }
        
        // 型変換
        int a = stoi(x.substr(i, 1));
        int b = stoi(x.substr(i+1, 1));
        
        // 隣接した数字
        if ((a + 1) % 10 != b % 10) {
            step = false;
        }
    }

    if (same || step) cout << "Weak" << endl;
    else cout << "Strong" << endl;
}