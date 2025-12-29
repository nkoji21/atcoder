#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> tmp;

    while (N != 0) {
        tmp.push_back(N % K);
        N /= K;
    }
    
    cout << tmp.size() << endl;
}