#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> W(N), X(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i] >> X[i];
    }
    
    int ans = 0;
    for (int i = 0; i < 24; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            int t = (X[j] + i) % 24;
            if (9 <= t && t < 18) {
                sum += W[j];
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}