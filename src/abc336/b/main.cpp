#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    string s;
    int tmp = n;
    while (tmp != 0) {
        s += to_string(tmp % 2);
        tmp /= 2;
    }
    
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') break;
        cnt++;
    }
    
    cout << cnt << endl;
}