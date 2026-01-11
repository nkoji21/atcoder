#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(M), B(M);
    
    // 入力を受け取る
    for (int i = 0; i < M; i++ ) {
        cin >> A[i] >> B[i];
    }
    
    // 出力用二次元配列
    vector<vector<char>> result(N, vector<char>(N, '-'));
    
    // 勝ち負けロジック
    for (int i = 0; i < M; i++) {
        result[A[i] - 1][B[i] - 1] = 'o';
        result[B[i] - 1][A[i] - 1] = 'x';
    }
    
    // 結果表出力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == N - 1) cout << result[i][j];
            else cout << result[i][j] << " ";

        }
        cout << endl;
    }
}