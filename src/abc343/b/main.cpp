#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int A;
            cin >> A;
            
            if (A == 1) {
                cout << j+1 << ' ';
            }
        }
        cout << endl;
    }
}