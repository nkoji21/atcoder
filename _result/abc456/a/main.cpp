#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  bool ok = false;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      for (int k = 1; k <= 6; k++) {
        if (i + j + k == X) ok = true;
      }
    }
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}

