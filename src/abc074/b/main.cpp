#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,k;
    cin >> n >> k;
    
    int sum = 0; // 移動距離の総和
    
    for (int i = 0; i < n; i++) {
        
        int x;
        cin >> x;
        
        if (x + x < (k-x) + (k-x)) {
            sum += x + x;
        } else {
            sum += (k-x) + (k-x);
        }
    }
    
    cout << sum << endl;
}