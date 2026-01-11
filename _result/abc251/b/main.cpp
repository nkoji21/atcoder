#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    set<int> cnt;
    // 1個以下
    for (int i = 0; i < n; i++) {
        if (a[i] <= w) {
            cnt.insert(a[i]);
        }
        // 2個以下
        for (int j = i+1; j < n; j++) {
            if (a[i]+a[j] <= w) {
                cnt.insert(a[i]+a[j]);
            }
            // 3個以下
            for (int k = j+1; k < n; k++) {
                if (a[i]+a[j]+a[k] <= w) {
                    cnt.insert(a[i]+a[j]+a[k]);
                }
            }
        }
    }
    
    cout << cnt.size() << endl;
}