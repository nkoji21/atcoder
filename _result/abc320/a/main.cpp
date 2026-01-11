#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;
    
    int x = 1, y = 1;
    for (int i = 0; i < b; i++) x *= a;
    for (int i = 0; i < a; i++) y *= b;
    
    cout << x + y << endl;
}