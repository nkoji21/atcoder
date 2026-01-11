#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    if (x >= y) {
        cout << 0 << endl;
        return 0;
    }
    
    cout << ((y-x) + 9) / 10 << endl;
}