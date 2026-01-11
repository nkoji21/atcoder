#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<string> s(a*n, string(b*n, '.'));
    for (int i = 0; i < a*n; i++) {
        for (int j = 0; j < b*n; j++) {
            int r = i/a, c = j/b;
            if ((r+c) % 2 == 1) {
                s[i][j] = '#';
            }
        }
    }
    
    for (string S : s) {
        cout << S << endl;
    }
}