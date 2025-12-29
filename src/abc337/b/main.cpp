#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    
    string t = s;
    sort(t.begin(), t.end());
    
    if (s == t) cout << "Yes" << endl;
    else cout << "No" << endl;
}