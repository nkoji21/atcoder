#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string ans = "";
    for (char c : S)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            ans += c;
    }
    cout << ans << endl;
}
