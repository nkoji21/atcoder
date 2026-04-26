#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * 包除原理の典型問題?
 *
 * N(N+1)/2 が文字列の存在する部分文字列の数 (全体とする)
 * で、文字の種類が3種類だから、
 * 全部がバラバラではない = 少なくとも2つの文字が同じである ことが成り立つから、
 *
 * 全体 N(N+1)/2 個の部分文字列から
 * 「3つのうち少なくとも2つが同じ」である部分文字列の個数を引くと、
 * 残ったものが「3つの数が全部バラバラ」な部分文字列の個数を求めることができる。
 *
 * 3つの数が全部バラバラってのは、
 * ABBCCC A:1 B:2 C:3 みたいな部分文字列
 *
 * 入力例1なら、以下の4つ
 * AAB A:2 B:1 C:0
 * ABB A:1 B:2 C:0
 * BBC A:0 B:2 C:1
 * BCC A:0 B:1 C:2
 *
 * で、少なくとも2つの文字が同じである個数を数えるのがこの問題の本質で、
 * 愚直にやるとTLEするから、それを累積和を使って、効率よく数える
 * - |A = B| |B = C| |A = C| の3つを数える
 * - |A = B = C| を数える
 */

int N;
string S;

static ll cnt_equal(char plus, char minus) {
  int cum = 0;
  map<int, ll> cnt;
  cnt[0] = 1;

  ll res = 0;
  for (char c : S) {
    if (c == plus)
      cum++;
    else if (c == minus)
      cum--;
    res += cnt[cum];
    cnt[cum]++;
  }
  return res;
}

static ll cnt_all_equal() {
  int d1 = 0, d2 = 0;
  map<pair<int, int>, ll> cnt;
  cnt[{0, 0}] = 1;

  ll res = 0;
  for (char c : S) {
    if (c == 'A')
      d1++;
    else if (c == 'B') {
      d1--;
      d2++;
    } else
      d2--;

    res += cnt[{d1, d2}];
    cnt[{d1, d2}]++;
  }
  return res;
}

int main() {
  cin >> N >> S;

  ll total = (ll)N * (N + 1) / 2;
  ll ab = cnt_equal('A', 'B');
  ll bc = cnt_equal('B', 'C');
  ll ac = cnt_equal('A', 'C');
  ll abc = cnt_all_equal();

  cout << total - ab - bc - ac + 2 * abc << endl;
  return 0;
}
