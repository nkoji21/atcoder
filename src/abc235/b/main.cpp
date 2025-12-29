#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    // 今立っている場所
    int p = 0;
    
    while (p < n-1 && h[p+1] > h[p]) {
        p++;
    }
    
    cout << h[p] << endl;
}