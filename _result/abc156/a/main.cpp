#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, r;
    cin >> n >> r;
    
    int ans = r;
    
    if (n < 10) {
        ans = r + 100 * (10 - n);
    }
    
    cout << ans << endl;
}