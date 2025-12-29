#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    int tmp = 0;
    
    for (int i = 0; i < n + (n+1); i++) {
        tmp++;
        ans ^= tmp;
        tmp--;
        
        cout << ans;
    }
}