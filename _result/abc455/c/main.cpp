#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * それぞれの値が何回出現しているかをカウントする
 * 7が2回あるのなら、14と計算しておく
 * で、カウントしたものを回数で昇順ソートして、一番後ろを合計から引いて、popすれば良さそう
 */
int main() {
  int N, K;
  cin >> N >> K;

  map<ll, ll> cnt;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    cnt[A]++;
  }

  vector<ll> vanish;
  ll ans = 0;
  for (auto [k, v] : cnt) {
    ll x = k * v;
    vanish.push_back(x);
    ans += x;
  }

  sort(vanish.begin(), vanish.end());

  for (int i = 0; i < K; i++) {
    if (vanish.size() == 0) break;
    ans -= vanish.back();
    vanish.pop_back();
  }
  cout << ans << endl;
  return 0;
}
