#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, l;
    cin >> n >> l;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (a >= l) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
}