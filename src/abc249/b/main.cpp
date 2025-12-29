#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    
    bool has_upper = false; // 大文字があるかどうか
    bool has_lower = false; // 小文字があるかどうか
    set<char> st;
    
    for (char c : s) {
        if ('A' <= c && c <= 'Z') has_upper = true;
        if ('a' <= c && c <= 'z') has_lower = true;
        st.insert(c);
    }
    
    if (has_upper && has_lower && st.size() == s.size()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}