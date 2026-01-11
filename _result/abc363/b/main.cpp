#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,p;
    cin >> n >> t >> p;
    
    int cnt = 0; // p以上の人をカウント
    
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        if (l[i] >= t) cnt++;
    }
    
    int day = 0; // 何日経ったか
    
    while (cnt < p) {
        cnt = 0;
        
        for (int i = 0; i < n; i++) {
            l[i]++;
            if (l[i] >= t) cnt++;
        }

        day++;
    }
    
    cout << day << endl;
}