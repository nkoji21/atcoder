#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<int> a(10);
    for (int i = 0; i < 10; i++) cin >> a[i];
    
    int ans = 0;
    
    for (int i = 0; i < 3; i++) {
        ans = a[ans];
    }
    
    cout << ans << endl;
}