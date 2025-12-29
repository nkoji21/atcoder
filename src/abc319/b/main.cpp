#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n+1; i++) {
        bool flag = true;
        
        for (int j = 1; j <= 9; j++) {
            if (n % j == 0 && i % (n/j) == 0) {
                cout << j;
                flag = false;
                break;
            }
        }
        
        if (flag) {
            cout << '-';
        }
    }
}