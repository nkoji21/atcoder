#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int currentL = 0, currentR = 0;
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        int key = 0;
        char hand;
        cin >> key >> hand;
        
        if (currentL != 0 && hand == 'L') res += abs(key - currentL);
        if (currentR != 0 && hand == 'R') res += abs(key - currentR);
        
        if (hand == 'L') currentL = key;
        else currentR = key;
    }
    
    cout << res << endl;
}