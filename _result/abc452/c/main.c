#include <stdio.h>
#include <string.h>

/**
N回をM回ネストして -> その中で「毎回M本の文字列全部を見る」みたいなことをすると
O(M^2) になってTLEかな

脊髄として候補の文字列 Sj を固定した時に、
各iについて「長さ Ai で、 Bi 文字目が Sj[i]になってる文字列があるかどうか」

文字列全てをチェックするより、先に判定することを決めておいて
1文字だけを見れば良い？

5
5 3 -> 「長さ5の文字列の3文字目」を見る -> retro, chris, itchy -> {t,r,c}
5 2 -> 「長さ5の文字列の2文字目」を見る -> {e,h,t}
4 1 -> tuna, crab, rock -> {t,c,r}
5 1
3 2
8
retro -> r,e,t,r,oで、使える文字がそれぞれ 1:{t,r,c} ok 2:{e,h,t} ok
全部OKだからYes chris itchy tuna crab rock cod ash

*/
int main(void) {
  int N;
  scanf("%d", &N);

  int A[10], B[10];
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &A[i], &B[i]);
  }

  int M;
  scanf("%d", &M);

  char S[200000][11];
  for (int i = 0; i < M; i++) {
    scanf("%10s", S[i]);
  }

  // 前処理: valid[i][c] = 肋骨i で文字cが使えるか
  int valid[10][26] = {0};
  for (int i = 0; i < M; i++) {
    size_t len = strlen(S[i]);
    for (int j = 0; j < N; j++) {
      if (len == A[j]) {
        valid[j][S[i][B[j] - 1] - 'a'] = 1;
      }
    }
  }

  // 判定
  for (int i = 0; i < M; i++) {
    size_t len = strlen(S[i]);
    if (len != N) {
      printf("No\n");
      continue;
    }

    int ok = 1;
    for (int j = 0; j < N; j++) {
      if (!valid[j][S[i][j] - 'a']) {
        ok = 0;
        break;
      }
    }

    printf("%s\n", ok ? "Yes" : "No");
  }

  // //入力確認
  // for (int i = 0; i < M; i++) {
  //   printf("S[%d] = %s\n", i, S[i]);
  // }

  return 0;
}
