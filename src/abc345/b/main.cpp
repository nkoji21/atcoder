#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;
    
    if (X % 10 == 0 || X < 0) {
        cout << X / 10 << endl;
    } else {
        cout << (X / 10) + 1 << endl;
    }
}