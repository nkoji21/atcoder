#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    set<int> a;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        a.insert(value);
    }
    
    vector<int> vec(a.begin(), a.end());
    
    cout << vec[vec.size() - 2] << endl;
}