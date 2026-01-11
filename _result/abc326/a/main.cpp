#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int x, y;
    cin >> x >> y;
    
    if (x-3 <= y && y <= x+2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}