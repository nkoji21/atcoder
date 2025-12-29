#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;
    
    vector<int> H(N);
    
    for (int i = 0; i < N; i++) cin >> H[i];
    
    double ans = 1, dMin = 1e9;

    for (int i = 0; i < N; i++) {
        double tmp = T - H[i] * 0.006;
        double d = abs(A - tmp);

        if (dMin > d) {
            dMin = d;
            ans = i + 1;
        }
    }
    
    cout << ans << endl;
}