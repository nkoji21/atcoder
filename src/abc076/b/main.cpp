#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;
    
    int sum = 1; // 最初の整数を定義
    
    for (int i = 0; i < n; i++) {
        if (sum + sum < sum + k) {
            sum += sum;
        } else {
            sum += k;
        }
    }
    
    cout << sum << endl;
}