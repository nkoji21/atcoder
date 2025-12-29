#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m), c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c.push_back(a[i]);
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        c.push_back(b[i]);
    }
    
    sort(c.begin(), c.end());

    vector<bool> exist(n+m);
    
    for (int i = 0; i < n+m; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i] == a[j]) exist[i] = true;
        }
    }

    for (int i = 0; i < n+m-1; i++) {
        if ((exist[i]) && (exist[i+1])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
}