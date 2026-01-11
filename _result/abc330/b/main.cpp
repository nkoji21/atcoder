#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        cout << max(min(a[i], r), l) << ' ';
    }
}