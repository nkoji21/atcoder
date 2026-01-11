#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r;
    string s;
    cin >> l >> r >> s;
    
    l--;
    r--;

    reverse(s.begin() + l, s.begin() + r + 1);
    
    cout << s << endl;
}