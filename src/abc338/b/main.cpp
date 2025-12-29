#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    
    map<char, int> cnt;
    for (int i = 0; i < (int)s.size(); i++) {
        cnt[s[i]]++;
    }
    
    int isMax = INT_MIN;
    char ans;

    for (auto p : cnt) {
        if (p.second > isMax) {
            isMax = p.second;
            ans = p.first;
        }
    }
    
    cout << ans << endl;
}