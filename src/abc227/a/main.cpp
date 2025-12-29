#include <bits/stdc++.h>
using namespace std;

int main() {
    // 2 3 1 2 3 1 2 3 1 2 3 1 2 3
    // 1 2 3 4 5 6 7 8 9 0 1 2 3 4
    int n, k, a;
    cin >> n >> k >> a;
    
    int ans = 0;
    
    for (int i = 0; i < k; i++) {
        ans = (a-1) % n + 1;
        a++;
    }
    
    cout << ans << endl;
}