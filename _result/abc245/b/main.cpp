#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x = 0;
    while (true) {
        bool exist = false;
        
        for (int n : a) {
            if (n == x) {
                exist = true;
            }
        }
        
        if (!exist) {
            cout << x << endl;
            return 0;
        }
        
        x++;
    }
}