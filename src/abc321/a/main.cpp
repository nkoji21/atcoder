#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    bool ans = true;
    for (int i = 0; i < N.size() - 1; i++) {
        if (N[i] <= N[i+1]) {
            ans = false;
        }
    }

    if (ans)
        cout << "Yes" << endl;
        else {
            cout << "No" << endl;
        }
}
