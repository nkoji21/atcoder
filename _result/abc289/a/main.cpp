#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (char& c : s) {
        c ^= 1;
    }
    
    cout << s << endl;
}