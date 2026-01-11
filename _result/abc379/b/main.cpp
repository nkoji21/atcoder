#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    int cnt = 0, ans = 0;
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'O') cnt++;
        else cnt = 0;
        
        if (cnt == k) {
            cnt = 0;
            ans++;
        }
    }
    
    cout << ans << endl;
}