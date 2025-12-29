#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int p = 0;
    int z = 0;
    
    for (char x : s) {
        if (x == '0') {
            z++;
        } else {
            p++;
            p += ((z + 1) / 2);
            z = 0;
        }
    }
    p += ((z + 1) / 2);

    cout << p << endl;
}