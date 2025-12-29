#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int res = 0;
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '#' && s[i+2] == '#' && s[i+1] == '.') res++;
    }
    
    cout << res << endl;
}