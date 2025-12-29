#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<bool> teeth(N);
    
    for (int i = 0; i < Q; i++) {
        int T;
        cin >> T;
        T--;
        
        if (teeth[T]) teeth[T] = false;
        else teeth[T] = true;
    }
    
    int ans = 0;
    
    for (bool x : teeth) {
        if (!(x)) ans++;
    }
    
    cout << ans << endl;
}