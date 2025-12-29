#include <bits/stdc++.h>
using namespace std;

int main () {
    int h;
    cin >> h;
    
    int cnt = 0;
    int ans = 0;
    
    while (cnt <= h) {
        cnt += pow(2, ans);
        ans++;
    }
    
    cout << ans << endl;
}