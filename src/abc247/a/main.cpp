#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string t(4, 0);
    t[0] = '0';
    t[1] = s[0];
    t[2] = s[1];
    t[3] = s[2];
    
    cout << t << endl;
}