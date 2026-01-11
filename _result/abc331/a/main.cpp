#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    
    d %= D;
    d++;
    
    if (d == 1) {
        m %= M;
        m++;
        if (m == 1) {
            y++;
        }
    }
    
    cout << y << ' ' << m << ' ' << d << endl;
}