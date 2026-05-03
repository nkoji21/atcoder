#include <bits/stdc++.h>
using namespace std;

/**
 * Sの左からi文字目までを見たときに、条件を満たす部分列が何個あるかを
 * 順に更新していく。
 *
 * つまり abbc なら、
 * a
 * ab
 * abb
 * abbc
 * というように小さな部分問題に分割できるから、これはDPが使える問題。
 *
 * 部分列は順序を保つ必要があるから、i文字目を使うなら、
 * それは必ず今まで作った部分列の末尾に追加することになる。
 *
 * そして隣り合わない部分列の個数を数えるためには、
 * 「最後に選んだ文字」だけを持つ部分列DPが適切。
 *
 *  abbc
 *  部分列って、元の順番を保ったまま文字を取るから
 *  例えば2文字目のbを取った後に使えるのは、その右側にある文字だけで、
 *  b, bc だけか。
 *
 */
int main() {
  const long long MOD = 998244353;

  string S;
  cin >> S;

  map<char, long long> dp;
  for (char c : S) {
    long long add = 1;
    for (char last : {'a', 'b', 'c'}) {
      if (last == c) continue;  // 最後に選んだ文字
      add += dp[last];
      add %= MOD;
    }

    dp[c] += add;
    dp[c] %= MOD;
  }

  long long ans = 0;
  for (auto& [k, v] : dp) {
    ans += v;
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
