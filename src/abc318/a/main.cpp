#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    cout << (n-(m-p))/p;
    cout << max(0, (n-(m-p))/p)<< endl;
}