#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.size();
    vector<string> vec(n);
    
    for (int i = 0; i < n; i++) {
        vec[i] = s.substr(i, n-i) + s.substr(0, i);
    }
    
    cout << *min_element(vec.begin(), vec.end()) << endl;
    cout << *max_element(vec.begin(), vec.end()) << endl;
}