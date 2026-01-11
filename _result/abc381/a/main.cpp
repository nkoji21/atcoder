#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    
    bool flag = true;
    
    if (n % 2 == 0) {
        flag = false;
    }
    
    for (int i = 0; i < n; i++) {
        if (i <= ((n+1) / 2) - 2) {
            if (s[i] != '1') flag = false;
        }
        
        if (s[((n+1) / 2) - 1] != '/') {
            flag = false;
        }
        
        if (i >= ((n+1) / 2)) {
            if (s[i] != '2') flag = false;
        }
    }
    
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}