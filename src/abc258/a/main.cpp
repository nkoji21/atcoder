#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string fix(int x) {
    if (x < 10) {
        return '0' + to_string(x);
    } else {
        return to_string(x);
    }
}

int main() {
    int k;
    cin >> k;
    
    int h = 0, m = 0;
    if (k < 60) {
        h = 21;
    } else {
        h = 22;
    }
    
    m = k % 60;
    
    cout << h << ':' << fix(m) << endl;
}