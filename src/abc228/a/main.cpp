#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,t,x;
    cin >> s >> t >> x;
    
    while (s != t) {
        s %= 24;

        if (s == x) {
            cout << "Yes" << endl;
            return 0;
        }

        s++;
    }
    
    cout << "No" << endl;
}