#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if ((long long)pow(-2, 31) <= n && n < (long long)pow(2, 31)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}