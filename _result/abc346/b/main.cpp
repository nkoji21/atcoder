#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, B;
    cin >> W >> B;
    
    string S = "wbwbwwbwbwbw";
    
    bool ans = false;
    
    for (int i = 0; i < (int)S.size(); i++) {
        int nW = 0, nB = 0;
        for (int j = 0; j < W+B; j++) {
            if (S[(i+j) % 12] == 'w') {
                nW++;
            }
            
            if (S[(i+j) % 12] == 'b') {
                nB++;
            }
        }
        
        if (nW == W && nB == B) {
            ans = true;
        }
    }
    
    
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}