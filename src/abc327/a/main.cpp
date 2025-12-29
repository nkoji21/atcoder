#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool ans = false;
    for (int i = 0; i < n-1; i++) {
        if ((s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'a')) {
            ans = true;
        }
    }
    
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}