#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int ans = 0;
    
    for (int i = 0; i < N-1; i++) {
        int A;
        cin >> A;
        
        ans += A;
    }
    
    cout << ans * -1 << endl;
}