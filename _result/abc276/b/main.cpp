#include <bits/stdc++.h>
using namespace std;

/**
NxNのintの二次元配列を作る

A1 B1
A2 B2
...
Am Bm

で、それぞれA1番目の配列のB1番目をインクリメントする
で、B1番目の配列のA1番目をインクリメントする

これをM回繰り返す
出力する時に、NxNの二次元配列の1番目の0より大きいインデックス+1を空白区切りで出力する
ないところは0と出力する

メモリ超過になるから、二次元配列ではあるけど
全て初期化せずに可変長でpush_back活用してメモリ節約する

この場合、最後にソートする必要がある
*/
int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> list(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;

    list[A].push_back(B);
    list[B].push_back(A);
  }

  for (int i = 0; i < N; i++) {
    sort(list[i].begin(), list[i].end());
    cout << list[i].size();
    if (list[i].size() == 0) {
      cout << endl;
      continue;
    }
    for (int j = 0; j < list[i].size(); j++) {
      cout << ' ' << list[i][j] + 1;
    }
    cout << endl;
  }

  return 0;
}
