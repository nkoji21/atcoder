#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    for (int i = 0; i <= 9; i++) {
        if (A + B != i) {
            cout << i << endl;
            return 0;
        }
    }
}