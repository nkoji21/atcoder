#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    
    int a,b,c,d;
    a = n / 1000; // 1000の位
    b = (n / 100) % 10; // 100の位
    c = (n / 10) % 10; // 10の位
    d = n % 10; // 1の位
    
    if(a == b && b == c || b == c && c == d) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}