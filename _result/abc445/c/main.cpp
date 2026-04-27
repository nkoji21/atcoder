#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * 逆から考える
 * 後ろから答えを作っておくと、求めやすい
 */
int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> ans(N);
  for (int i = N - 1; i >= 0; i--) {
    if (A[i] == i + 1)
      ans[i] = A[i];
    else
      ans[i] = ans[A[i] - 1];
  }

  for (int n : ans) {
    cout << n << ' ';
  }
  cout << endl;
  return 0;
}
