#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> T(N), V(N);
    for (int i = 0; i < N; i++) cin >> T[i] >> V[i];
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (i != 0) {
            ans -= (T[i] - T[i-1]);
        }
        
        if (ans < 0) {
            ans *= 0;
        }
        
        ans += V[i];
    }
    
    cout << ans << endl;
}