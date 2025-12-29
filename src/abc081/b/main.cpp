#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) cin >> A[i];
    
    int cnt = 0;
    
    while (true) {
        bool exist_odd = false;
        
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) exist_odd = true;
        }
        
        // 奇数があれば繰り返し終了
        if(exist_odd) break;
            
        // 奇数がなければ2除算
        for (int i = 0; i < N; i++) {
            A[i] /= 2;
        }
        
        cnt++;
    }
    
    cout << cnt << endl;
}