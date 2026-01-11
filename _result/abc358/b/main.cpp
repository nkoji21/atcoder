#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];

    int totalTime = 0;

    for (int i = 0; i < n; i++) {

        if (totalTime >= t[i]) {
            totalTime += a;
        } else {
            totalTime = t[i] + a;
        }
        
        cout << totalTime << endl;
    }
}