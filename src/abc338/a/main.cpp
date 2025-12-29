#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 大文字かどうかを判定する関数
bool isUpper(char c) {
    return (c >= 'A' && c <= 'Z');
}

// 小文字かどうかを判定する関数
bool isLower(char c) {
    return (c >= 'a' && c <= 'z');
}

int main() {
    string s;
    cin >> s;
    
    bool ans = true;
    
    if (!(isUpper(s[0]))) ans = false;
    
    for (int i = 1; i < (int)s.size(); i++) {
        if (!(isLower(s[i]))) ans = false;
    }
    
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}