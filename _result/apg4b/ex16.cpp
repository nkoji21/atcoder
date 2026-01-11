#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data[i];
    }
    
    for (int i = 0; i < 5; i++) {
        if (data[i + 1] == data[i]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
}
