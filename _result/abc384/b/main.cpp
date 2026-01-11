#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    
    for (int i = 0; i < n; i++) {
        int d, a;
        cin >> d >> a;
        
        if (d == 1 && (1600 <= r && r <= 2799)) {
            r += a;
        }
        
        if (d == 2 && (1200 <= r && r <= 2399)) {
            r += a;
        }
    }
    
    cout << r << endl;
}