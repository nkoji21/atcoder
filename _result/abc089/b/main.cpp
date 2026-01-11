#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string ans = "Three";
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (s == "Y") {
            ans = "Four";
        }
    }
    
    cout << ans << endl;
}