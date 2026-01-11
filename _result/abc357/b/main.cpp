#include <bits/stdc++.h>
using namespace std;

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
    
    int upper = 0, lower = 0;
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (isUpper(s[i])) upper++;
        if (isLower(s[i])) lower++;
    }
    
    if (upper > lower) {
        // 全て大文字に
        for (int i = 0; i < (int)s.size(); i++) {
            if (isLower(s[i])) s[i] -= 32;
        }
    } else {
        // 全て小文字に
        for (int i = 0; i < (int)s.size(); i++) {
            if (isUpper(s[i])) s[i] += 32;
        }
    }
    
    cout << s << endl;
}