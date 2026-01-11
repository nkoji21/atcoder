#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> a;
    
    for (int i = 0; i < (4*n-1); i++) {
        int card;
        cin >> card;
        a[card]++;
    }
    
    for (const auto& [card, count] : a) {
        if (count == 3) {
            cout << card << endl;
            break;
        }
    }
}