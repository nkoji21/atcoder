#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    while (true) {
        string s = to_string(n);
        if ((s[0] - '0') * (s[1] - '0') == s[2] - '0') {
            cout << s << endl;
            break;
        }
        n++;
    }
}