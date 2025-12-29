#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> s(3);
    for (int i = 0; i < 3; i++) cin >> s[i];
    
    /*
        < > > A
        > < < A
        AB != AC
        
        < < < B
        > > > B
        AC = BC

        < < > C
        > > < C
    */
    
    if (s[0] != s[1]) cout << 'A' << endl;
    else if (s[1] == s[2]) cout << 'B' << endl;
    else cout << 'C' << endl;
}