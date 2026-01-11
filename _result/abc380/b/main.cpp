#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int cnt = 0;
    
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] == '-') {
            cnt++;
        } else {
            cout << cnt << ' ';
            cnt = 0;
        } 
    }
}