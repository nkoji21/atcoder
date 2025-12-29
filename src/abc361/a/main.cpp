#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K,X;
    cin >> N >> K >> X;
    
    vector<int> vec(N);
    
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    
    vec.insert(vec.begin()+K, X);
    
    for (int i = 0; i < N+1; i++) {
        cout << vec.at(i) << ' ';
    }
}