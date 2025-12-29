#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    int t = 0, a = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        
        t += x;
        a += y;
    }
    
    if (a < t) cout << "Takahashi" << endl;
    else if (a > t) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}