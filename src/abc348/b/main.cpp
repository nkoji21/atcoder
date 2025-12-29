#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    for (int i = 0; i < n; i++) {
        double tmp = 0;
        int ans = 0;
        
        for (int j = n-1; j >= 0; j--) {
            double d = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
            
            if (tmp <= d) {
                tmp = d;
                ans = j+1;
            }
        }
        
        cout << ans << endl;
    }
}