#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;
    
    int cnt = 0;
    
    for (int i = n-1; i >= 0; i--) {
        if (s[i] == '@') {
            s[i] = '.';
            cnt++;
        }
        
        if (cnt == d) break;
    }
    
    cout << s << endl;
}