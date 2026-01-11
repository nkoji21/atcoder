#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int k, g, m;
    cin >> k >> g >> m;
    
    int ng = 0, nm = 0;
    for (int i = 0; i < k; i++) {
        if (ng == g) {
            ng = 0;
        } else if (nm == 0) {
            nm = m;
        } else {
            while (ng != g && nm != 0) {
                ng++;
                nm--;
            }
        }
    }
    cout << ng << ' ' << nm << endl;
}