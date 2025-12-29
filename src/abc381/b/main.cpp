#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int t = s.size();
    
    bool flag = true;
    
    if (t % 2 != 0) {
        flag = false;
    }
    
    map<char, int> cnt;
    
    for (int i = 1; i <= (t/2); i++) {
        if (s[2*i-2] != s[2*i-1]) {
            flag = false;
        }
    }
    
    for (char c : s) {
        cnt[c]++;
    }
    
    for (auto p : cnt) {
        if (p.second != 2) {
            flag = false;
        }
    }
    
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}