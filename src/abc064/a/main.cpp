#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,g,b;
    cin >> r >> g >> b;
    
    int rgb = r*100+g*10+b;
    if (rgb % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}