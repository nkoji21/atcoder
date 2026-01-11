#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    
    int takahashi = 0, aoki = 0;
    
    for (int i = 0; i < x; i++) {
        // 高橋くん
        if (i % (a+c) < a) {
            takahashi += b;
        }
        
        // 青木くん
        if (i % (d+f) < d) {
            aoki += e;
        }
    }
    
    if (takahashi < aoki) cout << "Aoki" << endl;
    else if (takahashi > aoki) cout << "Takahashi" << endl;
    else cout << "Draw" << endl;
}