#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A;

    int value;
    
    while (cin >> value) {
        A.push_back(value);
    }
    
    for (int i = A.size() - 1; i >= 0; i--) {
        cout << A[i] << endl;
    }
}