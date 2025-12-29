#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a,b;
    cin >> a >> b;
    
    if (a > 0 && a < 10 && b > 0 && b < 10) {
        cout << a * b << endl;
    } else {
        cout << -1 << endl;
    }
}