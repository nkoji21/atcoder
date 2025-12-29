#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> colorCount(4);
    
    for (int i = 0; i < 4; i++) {
        int color;
        cin >> color;
    
        colorCount[color - 1]++;
    }
    
    int ans = 0;
    for (int color : colorCount) ans += color / 2;
    
    cout << ans << endl;
}