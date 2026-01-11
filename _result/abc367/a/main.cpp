#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    while(b != c) {
        if(b == a) {
            cout << "No" << endl;
            return 0;
        }
        
        b++;
        b %= 24;
    }
    
    cout << "Yes" << endl;
}