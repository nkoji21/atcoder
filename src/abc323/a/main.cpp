#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i <= s.size(); i+=2) {
        if (s[i] != '0') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
