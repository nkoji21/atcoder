#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    vector<int> h(n);
    for (int& x : h) cin >> x;
    
    int ans = -1;
    
    for (int i = 0; i < n-1; i++) {
        if (h[0] < h[i+1]) {
            ans = i+2;
            break;
        }
    }
    
    cout << ans << endl;
}