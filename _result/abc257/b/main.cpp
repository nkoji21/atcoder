#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q;
    cin >> n >> k >> q;
    
    vector<int> a(k), l(q);
    for (int i = 0; i < k; i++) cin >> a[i];
    for (int i = 0; i < q; i++) cin >> l[i];
    
    for (int i = 0; i < q; i++) {
        int idx = l[i] -1;
        
        // 一番右にあるなら
        if (a[idx] == n) {
            continue;
        } else {
            // 一つ右にコマがないなら
            if (a[idx+1] == a[idx]+1) {
                continue;
            } else {
                a[idx]++;
            }
        }

    }
    
    for (int x : a) cout << x << ' ';
}