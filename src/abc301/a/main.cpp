#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    int t = 0, a = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') t++;
        if (s[i] == 'A') a++;
        
        if (t == (n+1)/2) {
            cout << 'T' << endl;
            return 0;
        }
        
        if (a == (n+1)/2) {
            cout << 'A' << endl;
            return 0;
        }
    }
}