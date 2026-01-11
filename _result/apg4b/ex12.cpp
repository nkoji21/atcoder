#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char s;
    int ans = 1;

    while (cin >> s) {
        
        if (s == '+') {
            ans++;
        } 
        
        else if (s == '-') {
            ans--;
        }
    }
    
    cout << ans << endl;
}
