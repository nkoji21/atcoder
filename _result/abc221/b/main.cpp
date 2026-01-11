#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    bool ans = false;
    
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != t[i]) {
            if (i+1 < (int)s.size()) {
                swap(s[i], s[i+1]);
                if (s == t) ans = true;
                swap(s[i], s[i+1]);
            }
            
            if (0 < i) {
                swap(s[i],s[i-1]);
                if (s == t) ans = true;
                swap(s[i],s[i-1]);
            }
        }
    }
    
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}