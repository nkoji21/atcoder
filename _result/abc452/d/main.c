#include <stdio.h>
#include <string.h>

/**
尺取り法 / sliding window / two pointers が使えるんじゃね?
どういう時に右に伸ばして、どういう時に左を縮めれば良いんだろ

部分文字列として S==T になったら左を縮める?
そもそも1個ずつ数える必要あるかな?
左端と右端をうまく置けてたらその距離で個数計算できないかな

Tの長さより window を広げることは無さそう。
いや、あるか。S="abcde" T="ab"の時に、"bcde" となるもんな

この場合も部分文字列になるからカウントしないようにしないといけないのか
S="abcd" T="ab" ab, abc, abcd これら全部部分文字列だもん

---
入力例1
abrakadabra
aba

- 各左端 l に対して、S[l..r] が T を部分文字列として含む最小の r を求める
- r が見つかったら、S[l..r], S[l..r+1], .., S[l..n-1]
  - 全部Tを含むから -> これらは数えない(nはSの長さ)
- S[l..l], S[l..l+1], .., S[l..r-1] はTを含まない -> これらが答えにプラスされる
  - r-l 個かな?
- もしTを含む r が存在しなかったら -> n-l 個全てカウント
- l を右にずらすと、r は右に動く(two pointers(尺取り法))

---
Tを部分列として含むかどうかの判定を工夫しないと計算量が O(N^2) になるかも

*/

int next_char_pos[200002][26];

int main(void) {
  char S[200001], T[51];
  scanf("%s %s", S, T);

  size_t n = strlen(S);
  size_t m = strlen(T);

  // 前計算: next_char_pos[i][c] = 位置 i 以降で文字 c が最初に現れる位置
  for (int c = 0; c < 26; c++)
    next_char_pos[n][c] = n;
  for (int i = n - 1; i >= 0; i--) {
    for (int c = 0; c < 26; c++)
      next_char_pos[i][c] = next_char_pos[i + 1][c];
    next_char_pos[i][S[i] - 'a'] = i;
  }

  long long ans = 0;
  for (size_t l = 0; l < n; l++) {
    size_t pos = l;
    int found = 1;
    for (int t_idx = 0; t_idx < m; t_idx++) {
      pos = next_char_pos[pos][T[t_idx] - 'a'];
      if (pos == n) {
        found = 0;
        break;
      }

      pos++;
    }

    if (!found)
      ans += (n - l);
    else
      ans += (pos - 1 - l);
  }

  printf("%lld\n", ans);
  return 0;
}
