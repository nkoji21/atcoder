#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int y = s[s.size() - 1] - '0';
    
    s = s.substr(0, s.size() - 2);
    
    if (y <= 2) {
        s += '-';
    } else if (7 <= y && y <= 9) {
        s += '+';
    }
    
    cout << s << endl;
}