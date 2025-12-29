#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    int q;
    cin >> q;
    
    vector<int> a(q), b(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i];
        
        for (int j = 0; j < n; j++) {
            if (a[i] == p[j]) {
                cout << a[i] << endl;
                break;
            }
            
            if (b[i] == p[j]) {
                cout << b[i] << endl;
                break;
            }
        }
    }
}