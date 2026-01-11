#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // 42以上であれば +1
    if (n >= 42) n++;

    // 文字列変換
    string res = to_string(n);

    // 先頭に0追加
    while (res.size() < 3) {
        res = '0' + res;
    }
    
    cout << "AGC" << res << endl;
}