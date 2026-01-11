#include <bits/stdc++.h>
using namespace std;

int main () {
    string s, t;
    cin >> s >> t;
    
    int j = 0;
    
    for (int i = 0; i < (int)t.size(); i++) {
        if (t[i] == s[j]) {
            cout << i+1 << " ";
            j++;
        }
    }
}