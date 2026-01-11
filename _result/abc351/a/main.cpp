#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    
    int takahashi = 0, aoki = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> a;
        takahashi += a;
    }
    
    for (int i = 0; i < 8; i++) {
        cin >> b;
        aoki += b;
    }
    
    cout << takahashi - aoki + 1 << endl;
}