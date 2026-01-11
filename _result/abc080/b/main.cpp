#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int tmp = n;
    int sum = 0;
    
    while (n != 0) {
        sum += n % 10; // 最下位の桁
        n /= 10;
    }
    
    if (tmp % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}