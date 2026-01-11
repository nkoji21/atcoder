#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long num = 0;
    int k = 0;
    
    while (num <= n) {
        num = pow(2, k);
        k++;
    }
    
    cout << k-2 << endl;
}