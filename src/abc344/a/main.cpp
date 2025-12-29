#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    bool skip = false;
    
    for (char c : S) {
        if (c == '|') {
            skip = !skip;
        } else if (!skip) {
            cout << c;
        }
    }
}