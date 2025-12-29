#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int cnt = 0;
    
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'o') cnt++;
    }
    
    cout << 700 + 100 * cnt << endl;
}