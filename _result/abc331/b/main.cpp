#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    
    int ans = INT_MAX;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                if (i*6 + j*8 + k*12 < n) continue;
                
                int sum = i*s + j*m + k*l;
                ans = min(ans, sum);
            }
        }
    }
    cout << ans << endl;
}