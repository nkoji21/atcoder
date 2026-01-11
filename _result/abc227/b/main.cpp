#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> st;
    for (int a = 1; a <= 200; a++) {
        for (int b = 1; b <= 200; b++) {
            int s = 4*a*b + 3*a + 3*b;
            st.insert(s);
        }
    }
    
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        
        if (st.count(s) == 0) ans++;
    }
    
    cout << ans << endl;
}