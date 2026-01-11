#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> T(N), L(N);
    for (int i = 0; i < N; i++) cin >> T[i] >> L[i];
    
    for (int i = 0; i < D; i++) {
        int ans = 0;
        for (int j = 0; j < N; j++) {
            L[j]++;
            ans = max(ans, T[j] * L[j]);
        }
        cout << ans << endl;
    }
}