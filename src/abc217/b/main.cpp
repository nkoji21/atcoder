#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> atcoder = {"ABC", "ARC", "AGC", "AHC"};
    
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        
        remove(atcoder.begin(), atcoder.end(), s);
    }
    
    cout << atcoder[0] << endl;
}