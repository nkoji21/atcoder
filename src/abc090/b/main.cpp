#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    int ans = 0;
    
    while (a <= b) {
        
        string reverse = "";
        int tmp = a;
        
        // aを逆さにしたものをreverseに
        while (tmp != 0) {
            reverse += to_string(tmp % 10);
            tmp /= 10;
        }

        // aとreverseを比較
        if (a == stoi(reverse)) {
            ans++;
        }
        
        a++;
    }
    cout << ans << endl;
}