#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll b;
    cin >> b;
    
    for (ll a = 1; a <= 15; a++) {
        
        ll x = 1;
        for (int i = 0; i < a; i++) {
            x *= a;
        }
        
        if (x == b) {
            cout << a << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
}