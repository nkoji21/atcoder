#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(2);
    
    for (int i = 0; i < 2; i++) cin >> vec[i];
    
    int ans = 0;
    
    for (int i = -200; i < 200; i++) {
        vector<int> tmp = vec;
        
        tmp.push_back(i);
        sort(tmp.begin(), tmp.end());
        
        if (tmp[1] - tmp[0] == tmp[2] - tmp[1]) ans++;
    }
    
    cout << ans << endl;
}