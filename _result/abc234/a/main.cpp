#include <bits/stdc++.h>
using namespace std;

int f(int x) {
    int result = (int)pow(x,2) + 2*x + 3;
    return result;
}

int main() {
    int t;
    cin >> t;
    
    int ans = f(f(f(t) + t) + f(f(t)));
    cout << ans << endl;
}