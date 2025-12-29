#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(8);
    
    bool flag = true;

    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }
    
    for (int i = 0; i < 8; i++) {
        if (i < 7 && s[i] > s[i+1]) {
            flag = false;
        }

        if (100 > s[i] || s[i] > 675) {
            flag = false;
        }
        
        if (s[i] % 25 != 0) {
            flag = false;
        }
    }
    
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}