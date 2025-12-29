#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    
    double ans = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            double root = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
            ans = max(ans, root);
        }
    }
    
    cout << fixed << setprecision(6);
    cout << ans << endl;
}