#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        
        if (s <= x) {
            sum += s;
        }
    }
    
    cout << sum << endl;
}