#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  vector<vector<int>> cnt(3, vector<int>(6, 0));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      int a;
      cin >> a;

      cnt[i][a - 1]++;
    }
  }

  // 確率計算
  vector<int> idx = {3, 4, 5};
  ll ok = 0;
  sort(idx.begin(), idx.end());

  do {
    ll tmp = 1;
    for (int i = 0; i < 3; i++) {
      tmp *= cnt[i][idx[i]];
    }
    ok += tmp;
  } while (next_permutation(idx.begin(), idx.end()));

  cout << fixed << setprecision(6) << (double)ok / 216.0 << endl;
  return 0;
}

