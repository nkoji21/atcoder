#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool f(string s) {
    int d = abs(s[0] - s[1]);
    return d == 2 || d == 3;
}

int main() {
    string s, t;
    cin >> s >> t;
    
    if (f(s) == f(t)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}