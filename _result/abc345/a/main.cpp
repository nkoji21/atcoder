#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if (s[0] != '<') {
        cout << "No" << endl;
        return 0;
    }

    if (s[s.size() - 1] != '>') {
        cout << "No" << endl;
        return 0;
    }
    
    for (int i = 1; i < (int)s.size() - 1; i++) {
        if (s[i] != '=') {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
}