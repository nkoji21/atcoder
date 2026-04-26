#include <bits/stdc++.h>
using namespace std;

static bool is_point_symmetric(const vector<string>& s, int h1, int h2, int w1, int w2) {
  for (int i = h1; i < h2; i++) {
    for (int j = w1; j < w2; j++) {
      if (s[i][j] != s[h1 + h2 - i - 1][w1 + w2 - j - 1]) return false;
    }
  }
  return true;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];

  int ans = 0;
  for (int h1 = 0; h1 < h; h1++)
    for (int h2 = h1 + 1; h2 <= h; h2++)
      for (int w1 = 0; w1 < w; w1++)
        for (int w2 = w1 + 1; w2 <= w; w2++) ans += is_point_symmetric(s, h1, h2, w1, w2);

  cout << ans << endl;

  return (0);
}
