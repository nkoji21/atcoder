#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    sort(n.begin(), n.end());
    
    if (n == "122333") cout << "Yes" << endl;
    else cout << "No" << endl;
}