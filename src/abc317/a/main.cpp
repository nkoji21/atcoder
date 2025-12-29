#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h,x;
    cin >> n >> h >> x;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    int tmp = 1e9;
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (h + p[i] >= x) {
            if (tmp > h+p[i]) {
                tmp = h+p[i];
                ans = i+1;
            }
        } 
    }
    
    cout << ans << endl;
}