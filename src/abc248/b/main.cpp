#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    
    int cnt = 0;
    while (a < b) {
        a *= k;
        cnt++;
    }
    
    cout << cnt << endl;
}