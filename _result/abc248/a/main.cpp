#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string t = "0123456789";
    
    sort(s.begin(), s.end());
    
    for (int i = 0; i <= 9; i++) {
        if (s[i] != t[i]) {
            cout << t[i] << endl;
            return 0;
        }
    }
}