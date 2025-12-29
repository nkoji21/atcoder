#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> tmp = a;
    sort(tmp.begin(), tmp.end(), greater<int>());
    
    auto iter = find(a.begin(), a.end(), tmp[1]);
    
    int index = distance(a.begin(), iter);
    
    cout << index + 1 << endl;
}