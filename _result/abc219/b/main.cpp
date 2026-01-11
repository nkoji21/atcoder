#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(3);
    
    for (int i = 0; i < 3; i++) cin >> s[i];
    
    string t;
    cin >> t;
    
    for (int i = 0; i < (int)t.size(); i++) {
        cout << s[t[i] - '0' - 1];
    }
}