#include <bits/stdc++.h>
using namespace std;

/**
左から読みながら「末尾が (xx) になったら即 xx にする」を繰り返すスタック実装
*/

static string reduce(string s) {
  string t;
  for (char c : s) {
    t.push_back(c);
    while (t.size() >= 4 && t[t.size() - 4] == '(' && t[t.size() - 3] == 'x' &&
           t[t.size() - 2] == 'x' && t[t.size() - 1] == ')') {
      t.resize(t.size() - 4);
      t.push_back('x');
      t.push_back('x');
    }
  }

  return t;
}

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    string A, B;
    cin >> A >> B;

    cout << ((reduce(A) == reduce(B)) ? "Yes" : "No") << endl;
  }

  return 0;
}
