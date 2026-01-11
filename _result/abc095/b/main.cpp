#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> m(N);
    
    int sum = 0;
    int min_m = 1e9;
    
    // 入力を受け取る
    for (int i = 0; i < N; i++) cin >> m[i];
    
    // N種類のお菓子の素の和と最小の値を取得
    for (int i = 0; i < N; i++) {
        sum += m[i];
        min_m = min(min_m, m[i]);
    }
    
    cout << N + ((X - sum) / min_m) << endl;
}