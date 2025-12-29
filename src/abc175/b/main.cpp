#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // 入力を受け取る
    vector<int> L(N);
    for (int i = 0; i < N; i++) cin >> L[i];
    
    // 小さい順にソートする
    sort(L.begin(), L.end());

    int cnt = 0;
    
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {

                // 長さが全て異なるかチェック
                if (L[i] != L[j] && L[j] != L[k] && L[i] != L[k]) {
                    // 三角形が成り立つかチェック
                    if (L[i] + L[j] > L[k]) cnt++;
                }
            }
        }
    }
    
    // 出力
    cout << cnt << endl;
}