#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> degree;
    
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        
        degree[a]++;
        degree[b]++;
    }
    
    bool isStar = false;
    
    for (int i = 1; i <= n; i++) {
        if (degree[i] == n-1) isStar = true;
    }
    
    if (isStar) cout << "Yes" << endl;
    else cout << "No" << endl;
}