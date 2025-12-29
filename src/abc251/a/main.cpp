#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t;

    while (t.size() < 6) {
        t += s;
    }

    cout << t << endl;
}
