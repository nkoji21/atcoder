#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int startA = 0, endZ = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            startA = i + 1;
            break;
        }
    }
    
    for (int i = s.size(); i > 0; i--) {
        if (s[i] == 'Z') {
            endZ = i + 1;
            break;
        }
    }
    
    cout << (endZ - startA) + 1 << endl;
}