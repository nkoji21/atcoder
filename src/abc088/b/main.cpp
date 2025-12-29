#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    
    // 入力
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // 数字の大きい順にソート
    sort(a.begin(), a.end(), greater<int>());

    int Alice = 0, Bob = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            Alice += a[i];
        } else {
            Bob += a[i];
        }
    }
    
    cout << Alice - Bob << endl;
}
