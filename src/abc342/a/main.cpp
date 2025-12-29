#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    map<char, int> cnt;
    
    for (char c : s) {
        cnt[c]++;
    }
    
    char ans;
    
    for (auto p : cnt) {
        if (p.second == 1) {
            ans = p.first;
        }
    }
    
    cout << s.find(ans) + 1 << endl;
}