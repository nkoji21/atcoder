#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    vector<int> A;
    
    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;
        
        if (a == 1) {
            A.push_back(b);
        }
        
        if (a == 2) {
            cout << A[A.size() - b] << endl;
        }
    }
}