#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> Cards;
    
    for (int i = 0; i < 4; i++) {
        int value;
        cin >> value;
        Cards.insert(value);
    }
    
    if (Cards.size() == 2) cout << "Yes" << endl;
    else cout << "No" << endl;
}