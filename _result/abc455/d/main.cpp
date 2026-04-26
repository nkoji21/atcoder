#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * 連結リストが最初に思いつくけど、連結リストだと
 * カードCがどこにいるかを見つけるために、山のトップから順に辿る必要がある。
 *
 * 方針としては以下2つのデータ構造を持って操作していく
 * - カードiが山のトップかどうか top[i]
 * - カードiの下にあるカード (なければ-1) to[i]
 */
int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> to(N, -1);
  vector<bool> top(N, true);

  for (int i = 0; i < Q; i++) {
    int C, P;
    cin >> C >> P;

    C--;
    P--;

    top[P] = false;
    if (to[C] != -1) top[to[C]] = true;
    to[C] = P;
  }

  vector<int> ans(N);
  for (int i = 0; i < N; i++) {
    if (top[i]) {
      int v = i, cnt = 1;
      while (to[v] != -1) {
        v = to[v];
        cnt++;
      }
      ans[v] = cnt;
    }
  }

  for (int i = 0; i < N; i++) {
    cout << ans[i] << ' ';
  }
  cout << endl;

  return 0;
}
