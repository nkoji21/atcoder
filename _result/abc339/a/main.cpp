#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    
    int l = s.size();
    for (int i = l-1; i >= 0; i--) {
        if (s[i] == '.') {
            cout << s.substr(i+1) << endl;
            break;
        }
    }
}