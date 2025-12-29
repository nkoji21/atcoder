#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> tmp = a;
    sort(tmp.begin(), tmp.end(), greater<int>());
    
    int res = 0;
    
    for (int i = 0; i < (int)a.size(); i++) {
        if (tmp[1] == a[i]) {
            res = i + 1;
            break;
        }
    }
    
    cout << res << endl;
}