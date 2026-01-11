#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x;
    cin >> x;
    
    ll sum = 1;
    for (int i = 1; i <= 20; i++) {
        sum *= i;
        
        if (sum == x) {
            cout << i << endl;
            return 0;
        }
    }
}