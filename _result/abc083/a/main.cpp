#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    int L = a + b;
    int R = c + d;
    
    if (L > R) {
        cout << "Left" << endl;
    } else if (L == R) {
        cout << "Balanced" << endl;
    } else {
        cout << "Right" << endl;
    }
}