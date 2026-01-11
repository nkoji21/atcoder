#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }
    
    vector<int> is, js;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'o') {
                is.push_back(i);
                js.push_back(j);
            }
        }
    }
    
    int ans = abs(is[0] - is[1]) + abs(js[0] - js[1]);
    cout << ans << endl;
}