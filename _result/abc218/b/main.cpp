#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    
    for (int i = 0; i < 26; i++) {
        int p;
        cin >> p;
        
        cout << s[p - 1];
    }
}