#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    // 各文字の出現回数
    map<char, int> cnt;
    for (char c : S) {
        cnt[c]++;
    }
    
    // 出現回数の種類数
    map<int, int> cnt2;
    for (auto p : cnt) {
        cnt2[p.second]++;
    }
    
    bool is_good = true;
    
    for (auto p : cnt2) {
        if (p.second != 0 && p.second != 2) {
            is_good = false;
        }
    }
    
    if (is_good) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}