#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    string s = "L";
    
    for (int i = 0; i < n; i++) {
        s += 'o';
    }
    
    s += "ng";
    
    cout << s << endl;
}