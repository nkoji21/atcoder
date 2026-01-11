#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(3), y(3);
    for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];
    
    // 辺の長さを a<=b<=c として格納
    vector<int> l(3);
    
    // 辺の長さを求める
    for (int i = 0; i < 3; i++) {
        int next = (i+1) % 3;
        int root = pow(x[next] - x[i], 2) + pow(y[next] - y[i], 2);
        l[i] = root;
    }

    if (l[0] + l[1] == l[2] || l[1] + l[2] == l[0] || l[2] + l[0] == l[1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}