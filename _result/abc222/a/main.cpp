#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    if (n.size() == 3) {
        n = '0' + n;
    } else if (n.size() == 2) {
        n = "00" + n;
    } else if (n.size() == 1) {
        n = "000" + n;
    }
    
    cout << n << endl;
}