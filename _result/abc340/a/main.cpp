#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, D;
    cin >> A >> B >> D;
    
    for (int i = A; i <= B; i+=D) {
        cout << i << ' ';
    }
}