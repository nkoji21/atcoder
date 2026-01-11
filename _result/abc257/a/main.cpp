#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    int N, X;
    cin >> N >> X;
    
    cout << s[(X-1)/N] << endl;
}