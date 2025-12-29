#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    // Noのパターン 2通り
    bool no1 = (s1 == "#." && s2 == ".#");
    bool no2 = (s1 == ".#" && s2 == "#.");
    
    if (no1 || no2) cout << "No" << endl;
    else cout << "Yes" << endl;
}