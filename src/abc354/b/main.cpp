#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    vector<string> s(n);
    int t = 0, c;
    
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> c;
        t += c;
    }
    
    sort(s.begin(), s.end());
    
    cout << s[t%n] << endl;
}