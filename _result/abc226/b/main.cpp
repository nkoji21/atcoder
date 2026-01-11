#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<vector<int>> a;
    
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        
        vector<int> tmp(l);
        for (int j = 0; j < l; j++) {
            cin >> tmp[j];
        }
        
        a.insert(tmp);
    }

    cout << a.size() << endl;
}