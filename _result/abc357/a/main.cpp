#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        
        m -= h;
        
        if (m >= 0) cnt++;
    }
    
    cout << cnt << endl;
}