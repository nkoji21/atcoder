#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    string t;
    cin >> n >> t;
    
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};
    
    int x = 0, y = 0, v = 1;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'S') {
            x += dx[v];
            y += dy[v];
        } else {
            v++;
            v %= 4;
        }
    }
    cout << x << ' ' << y << endl;
}