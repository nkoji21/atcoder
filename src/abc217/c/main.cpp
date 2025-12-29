#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> q(n);
    
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        q[p-1] = i+1;
    }
    
    for (int x : q) cout << x << " ";
}