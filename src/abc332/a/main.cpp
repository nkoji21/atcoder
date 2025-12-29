#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        
        sum += p*q;
    }
    
    if (sum >= s) cout << sum << endl;
    else cout << sum + k << endl;
}