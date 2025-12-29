#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string t;
    for (int i = 0; i < pow(10, 5); i++) t += "oxx";
    
    if (t.find(s) != -1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}