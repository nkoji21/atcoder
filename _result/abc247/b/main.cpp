#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    
    vector<string> s(N), t(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i] >> t[i];
    }

    for (int i = 0; i < N; i++) {
        bool s_ok = true, t_ok = true;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            
            if (s[i] == s[j] || s[i] == t[j]) {
                s_ok = false;
            }
            
            if (t[i] == t[j] || t[i] == s[j]) {
                t_ok = false;
            }
        }
        
        if (!s_ok && !t_ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
}