#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x;
    cin >> x;

    if (x < 0 && x % 10 != 0) {
        // 負の整数
        cout << x / 10 - 1 << endl;
    } else {
        // 正の整数
        cout << x / 10 << endl;
    }
}