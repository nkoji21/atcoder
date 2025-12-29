#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    double d = sqrt(x*x + y*y);
    double dx = x, dy = y;
    
    cout << fixed << setprecision(6);
    cout << dx/d << ' ' << dy/d << endl;
}