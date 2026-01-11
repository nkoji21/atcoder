#include <bits/stdc++.h>
using namespace std;

int main () {
    int N,K;
    cin >> N >> K;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int cnt = 0;
    int seats = K; // 空席の数
    
    for (int i = 0; i < N; i++) {
        if (seats < a[i]) {
            // 座席数が足りない場合
            cnt++;
            seats = K;
        }
        
        seats -= a[i];
    }
    
    cnt++;
    
    cout << cnt << endl;
}