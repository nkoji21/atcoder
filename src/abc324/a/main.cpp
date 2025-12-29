#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        a.insert(value);
    }

    if (a.size() == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
