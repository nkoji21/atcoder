#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    
    int n = s.size();
    if (n == 1) cout << 1 << endl;
    else if (n == 2) cout << 3 << endl;
    else if (n == 3) cout << 6 << endl;
}