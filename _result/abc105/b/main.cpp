#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            int total = i * 4 + j * 7;
            if (total == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;
}