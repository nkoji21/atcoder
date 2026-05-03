#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * 部分文字列は部分列と違って、
 * 文字が離れてれば成り立たないから、左から右に向けて読んでいるのなら
 * 左側を見なくて良いのか。
 *
 * 各位置を右端とする部分文字列を数えていく
 *
 * - curは、位置iで終わる「隣接文字が全て異なる連続区間」の長さとなる
 * - S[i] != S[i-1] なら cur++;
 * - S[i] == S[i-1] なら cur=1;
 * - 位置iを右端にする部分文字列は、長さ 1..curのcur個
 * abbcなら、
 * a    cur=1, ans=1 -> a
 * ab   cur=2, ans=3 -> b, ab
 * abb  cur=1, ans=4 -> b
 * abbc cur=2, ans=6 -> c, bc
 */
int main() {
  const int MOD = 998244353;

  string S;
  cin >> S;

  long long ans = 0;
  int cur = 0;

  for (int i = 0; i < S.size(); i++) {
    if (i > 0 && S[i] != S[i - 1])
      cur++;
    else
      cur = 1;

    ans += cur;
    ans %= MOD;
  }

  cout << ans << endl;

  return 0;
}
