#include <bits/stdc++.h>
using namespace std;

long long baseToBinary(string num, int k) {
    long long result = 0;
    
    for (char x : num) {
        result *= k;
        result += x - '0';
    }
    
    return result;
}

int main() {
    int k;
    string a,b;
    cin >> k >> a >> b;
    
    cout << baseToBinary(a, k) * baseToBinary(b, k) << endl;
}