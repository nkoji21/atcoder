#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int abc = stoi(s.substr(3));
    if (1 <= abc && abc < 350 && abc != 316) cout << "Yes" << endl;
    else cout << "No" << endl;
}